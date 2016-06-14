#include "Game01_Dudagi.h"

/// 생성자
Dudagi::Dudagi()
{
	/// Pos Info
	Init(0, 10, 15);
	Init(1, 20, 15);
	Init(2, 30, 15);
	Init(3, 10, 10);
	Init(4, 20, 10);
	Init(5, 30, 10);
	Init(6, 10, 5);
	Init(7, 20, 5);
	Init(8, 30, 5);

	/// Stage Info
	Init(0, 1000 * 10, 6000, 4000, 2);
	Init(1, 1000 * 10, 2000, 2000, 5);
	Init(2, 1000 * 120, 1000, 1000, 50);

	/// Int
	g_nStage = -1;
	g_nGrade = 0; // 점수 
	g_nStageCount = 1;
	g_nDudagiCount = 0;
	g_nTotalGrade = 0; // 총점
	g_nIsSuccess = 0;

	Init();
}

void Dudagi::Init(int array, int num1, int num2)
{
	nX[array] = num1;
	nY[array] = num2;
}

void Dudagi::Init(int array, int num1, int num2, int num3, int num4)
{
	LimitTime[array] = num1;
	UpLimitTime[array] = num2;
	DownLimitTime[array] = num3;
	nCatchDudagi[array] = num4;
}

/// 소멸자
Dudagi::~Dudagi()
{
}

/// 키 입력
void Dudagi::KeyInput()
{
	int nKey;

	if (Get_GameState() == RESULT)
		return;

	nKey = _getch();

	switch (nKey)
	{
	case ' ':
		if (Get_GameState() == INIT && g_nStage == 0)
		{
			Set_GameState(READY);
			Set_OldTime(clock());	// ready를 일정시간 지속해 주기 위해 							
		}
		break;
	case '1':  // 망치 키 입력 1 ~ 9까지
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':
	case '8':
	case '9':
		if (nIsAttack == 0 && Get_GameState() == RUNNING)
		{
			nIndex = nKey - '1';
			StartTime = clock();
			nIsAttack = 1;
		}
		break;
	case 'y':
	case 'Y':
		if (Get_GameState() == FAILED)
		{
			Init();
			Set_GameState(READY);
			g_nGrade = 0;
			Set_OldTime(clock());
		}
		break;
	case 'n':
	case 'N':
		if (Get_GameState() == FAILED)
		{
			Set_GameState(RESULT);
		}
		break;
	}
}

/// 초기화 ( 여러번 사용 )
void Dudagi::Init()
{
	int i;

	if (g_nStage == -1) // 1번만 초기화가 되는 부분에 대한 처리 사항
	{
		//		SoundInit();
		g_nStage = 0;
		//FMOD_System_PlaySound( g_System, FMOD_CHANNEL_FREE, g_Sound[0], 0, &g_Channel[0] );
	}

	g_nDudagiCount = 0; // 잡은 두더지 개수	
	g_nGrade = 0;

	// Note: 망치 셋업
	nIsAttack	= 0;
	nIndex		= 0;
	nStayX		= 38;
	nStayY		= 10;
	StartTime	= Get_StartTime();
	DelayTime	= 300;

	for (i = 0; i < 9; i++)
	{
		StayTime[i]		= rand() % DownLimitTime[g_nStage] + 10; // Note: 최소 10은 된다.
		OldTime[i]		= clock();
		nState[i]		= SETUP;
		OutPutTime[i]	= rand() % UpLimitTime[g_nStage] + 10; //최소 10은 된다.
	}
}

/// 랜더
void Dudagi::Render()
{
	int i;
	char string[100];

	SCREEN->ScreenClear();

	switch (Get_GameState())
	{
	case INIT:
		if (g_nStage == 0)
			PRINT->InitScreen();
		break;

	case READY:
		PRINT->ReadyScreen();
		sprintf_s(string, "%d", g_nStage + 1);
		SCREEN->ScreenPrint(16, 11, string);
		break;

	case RUNNING:
		PRINT->RunningScreen();

		sprintf_s(string, "목표 두더지 : %d  잡은 두더지 : %d", nCatchDudagi[g_nStage], g_nDudagiCount);
		SCREEN->ScreenPrint(2, 1, string);
		sprintf_s(string, "스테이지 : %d 점수 : %d 남은 시간 : %d ", g_nStage + 1, g_nGrade, Get_RemainTime());
		SCREEN->ScreenPrint(2, 2, string);

		for (i = 0; i < 9; i++)
		{
			if (nState[i] == UP)
				SCREEN->ScreenPrint(nX[i], nY[i], "●");

			SCREEN->ScreenPrint(nX[i], nY[i] + 1, "♨");
		}

		if (nIsAttack)
			PRINT->Mangchi(nX[nIndex], nY[nIndex]);
		else
			PRINT->MangchiReady(nStayX, nStayY);
		break;

	case SUCCESS:
		PRINT->SuccessScreen();
		sprintf_s(string, "%d", g_nStage + 1);
		SCREEN->ScreenPrint(20, 11, string);
		sprintf_s(string, "%d", g_nDudagiCount);
		SCREEN->ScreenPrint(21, 17, string);
		sprintf_s(string, "%d", g_nTotalGrade);
		SCREEN->ScreenPrint(14, 19, string);
		break;

	case FAILED:
		PRINT->FailureScreen();
		sprintf_s(string, "%d", g_nStage + 1);
		SCREEN->ScreenPrint(16, 11, string);
		break;

	case RESULT:
		PRINT->ResultScreen();
		sprintf_s(string, "%d", g_nTotalGrade);
		SCREEN->ScreenPrint(25, 11, string);
		break;
	}
	SCREEN->ScreenFlipping();
}

/// 업데이트
void Dudagi::Update()
{
	int i;
	clock_t CurTime = clock();

	switch (Get_GameState())
	{
	case READY:
		if (CurTime - Get_OldTime() > 2000)  // 2초
		{
			Set_GameState(RUNNING);
			Set_StartTime(CurTime);
		}
		break;
	case RUNNING:
		if ((CurTime - Get_StartTime()) > LimitTime[g_nStage])
		{
			Set_GameState(STOP);
			return;
		}
		else{
			// 두더지 업데이트	
			for (i = 0; i < 9; i++)
			{
				switch (nState[i])
				{
				case SETUP:
					OldTime[i]		= CurTime;
					OutPutTime[i]	= rand() % UpLimitTime[g_nStage]	+ 10;
					StayTime[i]		= rand() % DownLimitTime[g_nStage]	+ 10;
					nState[i]		= UP;
					break;
				case UP:
					if (CurTime - OldTime[i] > OutPutTime[i])
					{
						OldTime[i]	= CurTime;
						nState[i]	= DOWN;
					}
					break;
				case DOWN:
					if (CurTime - OldTime[i] > StayTime[i])
						nState[i]	= SETUP;
					break;
				}
			}

			// 망치 업데이트 
			if (nIsAttack)
			{
				for (i = 0; i < 9; i++)
				{
					if (nState[i] == UP && i == nIndex)
					{
						g_nGrade += 10;
						g_nDudagiCount++;
						nState[i] = DOWN; // 죽었으면 다운 상태로 바로 전환을 하도록 한다.																				
						break;
					}
				}
				if (CurTime - StartTime > DelayTime)
				{
					nIsAttack = 0;
				}
			}

			Set_RemainTime((LimitTime[g_nStage] - (CurTime - Get_StartTime())) / 1000);
		}
		break;
	case STOP:
		if (g_nDudagiCount >= nCatchDudagi[g_nStage])
		{
			Set_OldTime(CurTime);
			Set_GameState(SUCCESS);
			g_nTotalGrade += g_nGrade;
		}
		else
		{
			Set_GameState(FAILED);
		}
		break;
	case SUCCESS:
		if (CurTime - Get_OldTime() > 3000)
		{
			Set_OldTime(CurTime);
			g_nGrade = 0;
			++g_nStage;
			Init();
			Set_GameState(READY);
		}
		break;
	}
}