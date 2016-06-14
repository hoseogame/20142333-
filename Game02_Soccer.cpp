#include "Game02_Soccer.h"

Soccer::Soccer()
{
	Set_GameState(INIT);
	int state;
	state = Get_GameState();

	g_nStage = -1;

	Init(0, 3, 1, 20, 3, 1, 1000 * 20, 300);
	Init(1, 10, 2, 20, 5, 1, 1000 * 30, 300);
	Init();

}

Soccer::~Soccer()
{

}

void Soccer::Init(int array, int value1, int value2, int value3, int value4, int value5, int value6, int value7)
{
	s_nGoalBall[array]		= value1; 
	s_nGoalDaeLength[array]	= value2;
	s_nGoalDaeX[array]		= value3;
	s_nGoalDaeY[array]		= value4;
	s_nDist[array]			= value5;
	s_LimitTime[array]		= value6;
	s_MoveTime[array]		= value7;

}

void Soccer::Init()
{
	int i, nLength;

	if (g_nStage == -1)
	{
		//SoundInit(); // 사운드 초기화
		g_nStage = 0;
		//FMOD_CHANNEL_FREE( g_System, FMOD_CHANNEL_FREE, g_Sound[0], 0, &g_Channel[0]); // 소개 사운드는 전체에서 한번만 실행한다.
	}

	g_LimitTime			= s_LimitTime[g_nStage];  // 제한 시간 설정
	g_nGoalBallCount	= s_nGoalBall[g_nStage]; // 목표 골인 개수

	p_nCenterX	= 4;
	p_nCenterY	= 0;
	p_nMoveX	= 20;
	p_nMoveY	= 22;
	p_nX		= p_nMoveX - p_nCenterX;
	strcpy_s(g_strPlayer, "┗━●━┛");
	g_nLength = strlen(g_strPlayer);


	// 공의 초기화
	b_nIsReady	= 1;
	b_nMoveX	= p_nMoveX;
	b_nMoveY	= p_nMoveY - 1;
	b_MoveTime	= 100;

	// 골대 초기화
	d_nMoveX	= s_nGoalDaeX[g_nStage];
	d_nMoveY	= s_nGoalDaeY[g_nStage];
	d_nLength	= s_nGoalDaeLength[g_nStage];
	d_MoveTime	= s_MoveTime[g_nStage];
	d_OldTime	= clock();
	d_nDist		= s_nDist[g_nStage];
	nLength		= d_nLength * 2 + 1; // Note: 배열의 최대 길이

	for (i = 0; i < nLength; i++)
	{
		d_nLineX[i] = d_nMoveX + 2 * (i + 1);
	}

	// 효과 
	StayTime		= 2000;		// 2초 설정
	g_nGoal			= 0;		// 스테이지 완료 변수
	Set_OldTime(clock());
	g_nBallCount	= 0;		// 골인한 공의 개수
}

void Soccer::KeyInput()
{
	int nRemain, nKey;

	if (Get_GameState() == RESULT)
		return;

	nKey = _getch();

	switch (nKey)
	{
	case 'j':
		if (p_nMoveX > 2) // 왼쪽 충돌 경계 좌표 체크
		{
			p_nMoveX--;
			nRemain = g_nLength - p_nCenterX + 1; // 전체 길이 - ( 중심 좌표 + 1 )은 남은 길이
			// Note: 2컬럼씩 이동하기 위한 부분 ( 팔이 걸친 경우 ) 
			if (p_nMoveX - p_nCenterX < 2 || p_nMoveX + nRemain > 43)
				p_nMoveX--;

			p_nX = p_nMoveX - p_nCenterX;
		}
		break;
	case 'l':
		if (p_nMoveX + 1 < 43) // 오른쪽 충돌 경계 좌표 체크
		{
			p_nMoveX++;
			nRemain = g_nLength - p_nCenterX + 1; // 전체 길이 - ( 중심 좌표 + 1 )은 남은 길이
			// Note: 2컬럼씩 이동하기 위한 부분 ( 팔이 걸친 경우 )
			if (p_nMoveX + nRemain > 43 || (p_nMoveX - p_nCenterX < 2))
				p_nMoveX++;

			p_nX = p_nMoveX - p_nCenterX;
		}
		break;
	case 'k':
		if (b_nIsReady && Get_GameState() == RUNNING)
		{
			b_nMoveX = p_nMoveX;
			b_nMoveY = p_nMoveY - 1;
			b_OldTime = clock();
			b_nIsReady = 0;
			//FMOD_System_PlaySound( g_System, FMOD_CHANNEL_FREE, g_Sound[5], 0, &g_Channel[5]); // 슛 동작 소리 출력
		}
		break;

	case 'y':
	case 'Y':
		if (Get_GameState() == FAILED)
		{
			this->Init();
			Set_GameState(READY);
			//FMOD_Channel_Stop( g_Channel[2] );  // 미션 실패 사운드 출력 중지 
			//FMOD_System_PlaySound( g_System, FMOD_CHANNEL_FREE, g_Sound[3], 0, &g_Channel[3]);
		}
		break;
	case 'n':
	case 'N':
		if (Get_GameState() == FAILED)
		{
			Set_GameState(RESULT);
			//FMOD_Channel_Stop( g_Channel[2] );  // 미션 실패 사운드 출력 중지							
		}
		break;

	case ' ':
		if (Get_GameState() == INIT && g_nStage == 0)
		{
			Set_GameState(READY);
			//FMOD_Channel_Stop( g_Channel[0] ); // 배경음 중지
			//FMOD_System_PlaySound( g_System, FMOD_CHANNEL_FREE, g_Sound[3], 0, &g_Channel[3]); // ready 사운드
			Set_OldTime(clock());  // ready를 일정시간 지속해 주기 위해 							
		}
		break;
	}
}

void Soccer::Render()
{
	char string[100] = { 0, };
	int nLength, i;

	SCREEN->ScreenClear();

	switch (Get_GameState())
	{
	case INIT:
		if (g_nStage == 0)
			PRINT->fInitScreen();
		break;
	case READY:
		PRINT->fReadyScreen();
		break;
	case RUNNING:
		PRINT->fBackScreen();
		SCREEN->ScreenPrint(d_nMoveX, d_nMoveY, "□");
		nLength = d_nLength * 2 + 1;

		for (i = 0; i <nLength; i++)
			SCREEN->ScreenPrint(d_nLineX[i], d_nMoveY, "━");

		SCREEN->ScreenPrint(d_nLineX[nLength - 1] + 2, d_nMoveY, "□");

		// Note: 효과 출력  	
		if (g_nIsGoal == 1)
		{
			PRINT->fGoalMessage(10, 10);
		}

		// Note: 2 컬럼씩 클리핑 
		if (p_nX < 2)  //  왼쪽 클리핑 처리
			SCREEN->ScreenPrint(2, p_nMoveY, &g_strPlayer[(p_nX - 2)*-1]);	 // 좌표를 배열 인덱스 
		else if (p_nMoveX + (g_nLength - p_nCenterX + 1) > 43) // 오른쪽 클리핑 처리
		{
			strncat_s(string, g_strPlayer, g_nLength - ((p_nMoveX + p_nCenterX + 1) - 43));
			SCREEN->ScreenPrint(p_nX, p_nMoveY, string);
		}
		else { // 1 컬럼씩 이동
			SCREEN->ScreenPrint(p_nX, p_nMoveY, g_strPlayer);
		}

		SCREEN->ScreenPrint(b_nMoveX, b_nMoveY, "⊙");
		break;
	case SUCCESS:
		PRINT->fSuccessScreen();
		break;
	case FAILED:
		PRINT->fFailureScreen();
		break;
	case RESULT:
		PRINT->fResultScreen();
		break;
	}

	// Note: 렌더링 끝 
	SCREEN->ScreenFlipping();
}

void Soccer::Update()
{
	clock_t CurTime = clock();
	int nLength = d_nLength * 2 + 1;
	int i;

	switch (Get_GameState())
	{
	case READY:
		if (CurTime - Get_OldTime() > 2000)  // 2초
		{
			Set_GameState(RUNNING);
			p_StartTime = CurTime;

			//FMOD_Channel_Stop( g_Channel[3] );  // ready 사운드 중지
			//FMOD_System_PlaySound( g_System, FMOD_CHANNEL_FREE, g_Sound[1], 0, &g_Channel[1]); // running 배경음
		}
		break;
	case RUNNING:
		if (CurTime - p_StartTime > g_LimitTime) // Note: 제한 시간
		{
			Set_GameState(STOP);
			return;
		}
		else 
		{
			// Note: 골대
			if (CurTime - d_OldTime > d_MoveTime)
			{
				d_OldTime = CurTime;
				if (d_nMoveX + d_nDist >= 2 && ((d_nLineX[nLength - 1] + 3) + d_nDist) <= 43)
				{
					d_nMoveX += d_nDist;
					for (i = 0; i < nLength; i++)
					{
						d_nLineX[i] = d_nMoveX + 2 * (i + 1);
					}
				}
				else 
				{
					d_nDist = d_nDist * -1; // -1 이 방향을 바꾸어 줌.
				}
			}

			if (b_nIsReady == 0) // 이동 중일 때 
			{	// 이동 시간 간격에 의한 이동
				if ((CurTime - b_OldTime) > b_MoveTime)
				{
					if (b_nMoveY - 1 > 0)
					{
						b_nMoveY--;
						b_OldTime = CurTime; // 다음 이동 시각과 비교하기 위해 현재 시간을 이전 시간 변수에 저장

						// 골대 라인 충돌
						if (b_nMoveX >= d_nLineX[0] && b_nMoveX + 1 <= d_nLineX[nLength - 1] + 1)
						{
							if (b_nMoveY <= d_nMoveY)
							{   // 공 초기화
								b_nIsReady = 1;
								b_nMoveX = p_nMoveX;
								b_nMoveY = p_nMoveY - 1;
								g_nBallCount++;  // 골인한 공의 개수										

								if (g_nBallCount == g_nGoalBallCount) // 공과 목표 공과의 개수가 같으면 SUCCESS
								{
									Set_GameState(STOP);
									g_nGoal = 1;
									return;
								}

								// 효과 출력
								if (g_nIsGoal == 0)
								{
									g_nIsGoal = 1;
									StartTime = CurTime;
								}

								// 골인 사운드 출력
								//FMOD_System_PlaySound( g_System, FMOD_CHANNEL_FREE, g_Sound[6], 0, &g_Channel[6]); // 골인 사운드 와우~
							}
							// 골대 충돌 
						}
						else if ((b_nMoveX >= d_nLineX[0] - 2 && b_nMoveX <= d_nLineX[0] - 1) ||
							(b_nMoveX + 1 >= d_nLineX[0] - 2 && b_nMoveX + 1 <= d_nLineX[0] - 1) ||
							(b_nMoveX >= d_nLineX[nLength - 1] + 2 && b_nMoveX <= d_nLineX[nLength - 1] + 3) ||
							(b_nMoveX + 1 >= d_nLineX[nLength - 1] + 2 && b_nMoveX + 1 <= d_nLineX[nLength - 1] + 3))
						{
							if (b_nMoveY <= d_nMoveY)
							{   // 공 초기화
								b_nIsReady = 1;
								b_nMoveX = p_nMoveX;
								b_nMoveY = p_nMoveY - 1;
							}
						}
					}
					else { // 공 초기화
						b_nIsReady = 1;
						b_nMoveX = p_nMoveX;
						b_nMoveY = p_nMoveY - 1;
					}
				}
			}
			else 
			{
				b_nMoveX = p_nMoveX;
			}

			// 효과 
			if (g_nIsGoal == 1)
			{
				if (CurTime - StartTime > StayTime)
					g_nIsGoal = 0;
			}
		}
		break;
	case STOP:
		if (g_nGoal == 1)
		{
			p_StartTime = CurTime;
			Set_GameState(SUCCESS);
			//FMOD_Channel_Stop( g_Channel[1] );  // running 사운드 중지
			//FMOD_Channel_Stop( g_Channel[1] );  // running 사운드 중지

			//FMOD_System_PlaySound( g_System, FMOD_CHANNEL_FREE, g_Sound[4], 0, &g_Channel[4]); // 미션 성공 사운드
		}
		else 
		{
			p_StartTime = CurTime;
			Set_GameState(FAILED);
			//FMOD_Channel_Stop( g_Channel[1] );  // running 사운드 중지
			//FMOD_System_PlaySound( g_System, FMOD_CHANNEL_FREE, g_Sound[2], 0, &g_Channel[2]); // 미션 실패 사운드
		}
		break;
	case SUCCESS:
		if (CurTime - Get_OldTime() > 3000)
		{
			p_StartTime = CurTime;
			++g_nStage;
			Init();
			Set_GameState(READY);
			//FMOD_Channel_Stop( g_Channel[4] );  // 미션 성공 사운드 출력 중지					
			//FMOD_System_PlaySound( g_System, FMOD_CHANNEL_FREE, g_Sound[3], 0, &g_Channel[3]); //READY 사운드 
		}
		break;
	}
}

int Soccer::Get_Instance(int value)
{
	switch (value)
	{
	case 0:
		return g_nStage;
		break;
	case 1:
		return s_LimitTime[g_nStage];
		break;
	case 2:
		return p_StartTime;
		break;
	case 3:
		return s_nGoalBall[g_nStage];
		break;
	case 4:
		return g_nBallCount;
		break;
	default:
		break;
	}
}