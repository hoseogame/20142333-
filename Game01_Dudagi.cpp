#include "Game01_Dudagi.h"

/// ������
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
	g_nGrade = 0; // ���� 
	g_nStageCount = 1;
	g_nDudagiCount = 0;
	g_nTotalGrade = 0; // ����
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

/// �Ҹ���
Dudagi::~Dudagi()
{
}

/// Ű �Է�
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
			Set_OldTime(clock());	// ready�� �����ð� ������ �ֱ� ���� 							
		}
		break;
	case '1':  // ��ġ Ű �Է� 1 ~ 9����
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

/// �ʱ�ȭ ( ������ ��� )
void Dudagi::Init()
{
	int i;

	if (g_nStage == -1) // 1���� �ʱ�ȭ�� �Ǵ� �κп� ���� ó�� ����
	{
		//		SoundInit();
		g_nStage = 0;
		//FMOD_System_PlaySound( g_System, FMOD_CHANNEL_FREE, g_Sound[0], 0, &g_Channel[0] );
	}

	g_nDudagiCount = 0; // ���� �δ��� ����	
	g_nGrade = 0;

	// Note: ��ġ �¾�
	nIsAttack	= 0;
	nIndex		= 0;
	nStayX		= 38;
	nStayY		= 10;
	StartTime	= Get_StartTime();
	DelayTime	= 300;

	for (i = 0; i < 9; i++)
	{
		StayTime[i]		= rand() % DownLimitTime[g_nStage] + 10; // Note: �ּ� 10�� �ȴ�.
		OldTime[i]		= clock();
		nState[i]		= SETUP;
		OutPutTime[i]	= rand() % UpLimitTime[g_nStage] + 10; //�ּ� 10�� �ȴ�.
	}
}

/// ����
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

		sprintf_s(string, "��ǥ �δ��� : %d  ���� �δ��� : %d", nCatchDudagi[g_nStage], g_nDudagiCount);
		SCREEN->ScreenPrint(2, 1, string);
		sprintf_s(string, "�������� : %d ���� : %d ���� �ð� : %d ", g_nStage + 1, g_nGrade, Get_RemainTime());
		SCREEN->ScreenPrint(2, 2, string);

		for (i = 0; i < 9; i++)
		{
			if (nState[i] == UP)
				SCREEN->ScreenPrint(nX[i], nY[i], "��");

			SCREEN->ScreenPrint(nX[i], nY[i] + 1, "��");
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

/// ������Ʈ
void Dudagi::Update()
{
	int i;
	clock_t CurTime = clock();

	switch (Get_GameState())
	{
	case READY:
		if (CurTime - Get_OldTime() > 2000)  // 2��
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
			// �δ��� ������Ʈ	
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

			// ��ġ ������Ʈ 
			if (nIsAttack)
			{
				for (i = 0; i < 9; i++)
				{
					if (nState[i] == UP && i == nIndex)
					{
						g_nGrade += 10;
						g_nDudagiCount++;
						nState[i] = DOWN; // �׾����� �ٿ� ���·� �ٷ� ��ȯ�� �ϵ��� �Ѵ�.																				
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