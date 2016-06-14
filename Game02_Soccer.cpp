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
		//SoundInit(); // ���� �ʱ�ȭ
		g_nStage = 0;
		//FMOD_CHANNEL_FREE( g_System, FMOD_CHANNEL_FREE, g_Sound[0], 0, &g_Channel[0]); // �Ұ� ����� ��ü���� �ѹ��� �����Ѵ�.
	}

	g_LimitTime			= s_LimitTime[g_nStage];  // ���� �ð� ����
	g_nGoalBallCount	= s_nGoalBall[g_nStage]; // ��ǥ ���� ����

	p_nCenterX	= 4;
	p_nCenterY	= 0;
	p_nMoveX	= 20;
	p_nMoveY	= 22;
	p_nX		= p_nMoveX - p_nCenterX;
	strcpy_s(g_strPlayer, "�����ܦ���");
	g_nLength = strlen(g_strPlayer);


	// ���� �ʱ�ȭ
	b_nIsReady	= 1;
	b_nMoveX	= p_nMoveX;
	b_nMoveY	= p_nMoveY - 1;
	b_MoveTime	= 100;

	// ��� �ʱ�ȭ
	d_nMoveX	= s_nGoalDaeX[g_nStage];
	d_nMoveY	= s_nGoalDaeY[g_nStage];
	d_nLength	= s_nGoalDaeLength[g_nStage];
	d_MoveTime	= s_MoveTime[g_nStage];
	d_OldTime	= clock();
	d_nDist		= s_nDist[g_nStage];
	nLength		= d_nLength * 2 + 1; // Note: �迭�� �ִ� ����

	for (i = 0; i < nLength; i++)
	{
		d_nLineX[i] = d_nMoveX + 2 * (i + 1);
	}

	// ȿ�� 
	StayTime		= 2000;		// 2�� ����
	g_nGoal			= 0;		// �������� �Ϸ� ����
	Set_OldTime(clock());
	g_nBallCount	= 0;		// ������ ���� ����
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
		if (p_nMoveX > 2) // ���� �浹 ��� ��ǥ üũ
		{
			p_nMoveX--;
			nRemain = g_nLength - p_nCenterX + 1; // ��ü ���� - ( �߽� ��ǥ + 1 )�� ���� ����
			// Note: 2�÷��� �̵��ϱ� ���� �κ� ( ���� ��ģ ��� ) 
			if (p_nMoveX - p_nCenterX < 2 || p_nMoveX + nRemain > 43)
				p_nMoveX--;

			p_nX = p_nMoveX - p_nCenterX;
		}
		break;
	case 'l':
		if (p_nMoveX + 1 < 43) // ������ �浹 ��� ��ǥ üũ
		{
			p_nMoveX++;
			nRemain = g_nLength - p_nCenterX + 1; // ��ü ���� - ( �߽� ��ǥ + 1 )�� ���� ����
			// Note: 2�÷��� �̵��ϱ� ���� �κ� ( ���� ��ģ ��� )
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
			//FMOD_System_PlaySound( g_System, FMOD_CHANNEL_FREE, g_Sound[5], 0, &g_Channel[5]); // �� ���� �Ҹ� ���
		}
		break;

	case 'y':
	case 'Y':
		if (Get_GameState() == FAILED)
		{
			this->Init();
			Set_GameState(READY);
			//FMOD_Channel_Stop( g_Channel[2] );  // �̼� ���� ���� ��� ���� 
			//FMOD_System_PlaySound( g_System, FMOD_CHANNEL_FREE, g_Sound[3], 0, &g_Channel[3]);
		}
		break;
	case 'n':
	case 'N':
		if (Get_GameState() == FAILED)
		{
			Set_GameState(RESULT);
			//FMOD_Channel_Stop( g_Channel[2] );  // �̼� ���� ���� ��� ����							
		}
		break;

	case ' ':
		if (Get_GameState() == INIT && g_nStage == 0)
		{
			Set_GameState(READY);
			//FMOD_Channel_Stop( g_Channel[0] ); // ����� ����
			//FMOD_System_PlaySound( g_System, FMOD_CHANNEL_FREE, g_Sound[3], 0, &g_Channel[3]); // ready ����
			Set_OldTime(clock());  // ready�� �����ð� ������ �ֱ� ���� 							
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
		SCREEN->ScreenPrint(d_nMoveX, d_nMoveY, "��");
		nLength = d_nLength * 2 + 1;

		for (i = 0; i <nLength; i++)
			SCREEN->ScreenPrint(d_nLineX[i], d_nMoveY, "��");

		SCREEN->ScreenPrint(d_nLineX[nLength - 1] + 2, d_nMoveY, "��");

		// Note: ȿ�� ���  	
		if (g_nIsGoal == 1)
		{
			PRINT->fGoalMessage(10, 10);
		}

		// Note: 2 �÷��� Ŭ���� 
		if (p_nX < 2)  //  ���� Ŭ���� ó��
			SCREEN->ScreenPrint(2, p_nMoveY, &g_strPlayer[(p_nX - 2)*-1]);	 // ��ǥ�� �迭 �ε��� 
		else if (p_nMoveX + (g_nLength - p_nCenterX + 1) > 43) // ������ Ŭ���� ó��
		{
			strncat_s(string, g_strPlayer, g_nLength - ((p_nMoveX + p_nCenterX + 1) - 43));
			SCREEN->ScreenPrint(p_nX, p_nMoveY, string);
		}
		else { // 1 �÷��� �̵�
			SCREEN->ScreenPrint(p_nX, p_nMoveY, g_strPlayer);
		}

		SCREEN->ScreenPrint(b_nMoveX, b_nMoveY, "��");
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

	// Note: ������ �� 
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
		if (CurTime - Get_OldTime() > 2000)  // 2��
		{
			Set_GameState(RUNNING);
			p_StartTime = CurTime;

			//FMOD_Channel_Stop( g_Channel[3] );  // ready ���� ����
			//FMOD_System_PlaySound( g_System, FMOD_CHANNEL_FREE, g_Sound[1], 0, &g_Channel[1]); // running �����
		}
		break;
	case RUNNING:
		if (CurTime - p_StartTime > g_LimitTime) // Note: ���� �ð�
		{
			Set_GameState(STOP);
			return;
		}
		else 
		{
			// Note: ���
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
					d_nDist = d_nDist * -1; // -1 �� ������ �ٲپ� ��.
				}
			}

			if (b_nIsReady == 0) // �̵� ���� �� 
			{	// �̵� �ð� ���ݿ� ���� �̵�
				if ((CurTime - b_OldTime) > b_MoveTime)
				{
					if (b_nMoveY - 1 > 0)
					{
						b_nMoveY--;
						b_OldTime = CurTime; // ���� �̵� �ð��� ���ϱ� ���� ���� �ð��� ���� �ð� ������ ����

						// ��� ���� �浹
						if (b_nMoveX >= d_nLineX[0] && b_nMoveX + 1 <= d_nLineX[nLength - 1] + 1)
						{
							if (b_nMoveY <= d_nMoveY)
							{   // �� �ʱ�ȭ
								b_nIsReady = 1;
								b_nMoveX = p_nMoveX;
								b_nMoveY = p_nMoveY - 1;
								g_nBallCount++;  // ������ ���� ����										

								if (g_nBallCount == g_nGoalBallCount) // ���� ��ǥ ������ ������ ������ SUCCESS
								{
									Set_GameState(STOP);
									g_nGoal = 1;
									return;
								}

								// ȿ�� ���
								if (g_nIsGoal == 0)
								{
									g_nIsGoal = 1;
									StartTime = CurTime;
								}

								// ���� ���� ���
								//FMOD_System_PlaySound( g_System, FMOD_CHANNEL_FREE, g_Sound[6], 0, &g_Channel[6]); // ���� ���� �Ϳ�~
							}
							// ��� �浹 
						}
						else if ((b_nMoveX >= d_nLineX[0] - 2 && b_nMoveX <= d_nLineX[0] - 1) ||
							(b_nMoveX + 1 >= d_nLineX[0] - 2 && b_nMoveX + 1 <= d_nLineX[0] - 1) ||
							(b_nMoveX >= d_nLineX[nLength - 1] + 2 && b_nMoveX <= d_nLineX[nLength - 1] + 3) ||
							(b_nMoveX + 1 >= d_nLineX[nLength - 1] + 2 && b_nMoveX + 1 <= d_nLineX[nLength - 1] + 3))
						{
							if (b_nMoveY <= d_nMoveY)
							{   // �� �ʱ�ȭ
								b_nIsReady = 1;
								b_nMoveX = p_nMoveX;
								b_nMoveY = p_nMoveY - 1;
							}
						}
					}
					else { // �� �ʱ�ȭ
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

			// ȿ�� 
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
			//FMOD_Channel_Stop( g_Channel[1] );  // running ���� ����
			//FMOD_Channel_Stop( g_Channel[1] );  // running ���� ����

			//FMOD_System_PlaySound( g_System, FMOD_CHANNEL_FREE, g_Sound[4], 0, &g_Channel[4]); // �̼� ���� ����
		}
		else 
		{
			p_StartTime = CurTime;
			Set_GameState(FAILED);
			//FMOD_Channel_Stop( g_Channel[1] );  // running ���� ����
			//FMOD_System_PlaySound( g_System, FMOD_CHANNEL_FREE, g_Sound[2], 0, &g_Channel[2]); // �̼� ���� ����
		}
		break;
	case SUCCESS:
		if (CurTime - Get_OldTime() > 3000)
		{
			p_StartTime = CurTime;
			++g_nStage;
			Init();
			Set_GameState(READY);
			//FMOD_Channel_Stop( g_Channel[4] );  // �̼� ���� ���� ��� ����					
			//FMOD_System_PlaySound( g_System, FMOD_CHANNEL_FREE, g_Sound[3], 0, &g_Channel[3]); //READY ���� 
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