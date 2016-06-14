#pragma once
#include "system.h"

#define StageMax 2


class Soccer : public System
{
public:
	///------- init
	Soccer();
	virtual ~Soccer();

	///-------- System
	void KeyInput();
	void Init();
	void Init(int, int, int, int, int, int, int, int);
	void Render();
	void Update();

	int	 Get_Instance(int);

private:
	///-------- Stage Info
	int		s_nGoalBall[StageMax];			//넣어야할 골
	int	   	s_nGoalDaeLength[StageMax];		//골대길이
	int		s_nGoalDaeX[StageMax];			//골대 x위치
	int		s_nGoalDaeY[StageMax];			//골대 y위치
	int		s_nDist[StageMax];
	clock_t	s_LimitTime[StageMax];			//스테이지당 제한시간
	clock_t	s_MoveTime[StageMax];			//움직이는 시간

	///-------- Player
	int		p_nCenterX, p_nCenterY;			//캐릭터 의 중앙
	int		p_nMoveX, p_nMoveY;				// 캐릭터 움직임
	int		p_nX, p_nY;						// 캐릭터 좌표
	clock_t	p_StartTime;					

	///-------- Ball
	int		b_nIsReady;						//공이 있는지 없는지
	int		b_nMoveX, b_nMoveY;				//공위치
	clock_t	b_MoveTime;						//공 진행시간
	clock_t	b_OldTime;						//진행시간 체크

	///-------- GoalDae
	int		d_nMoveX, d_nMoveY;				//움직임
	int		d_nLength;						//길이
	int		d_nLineX[7];					
	int		d_nDist;
	clock_t	d_MoveTime;
	clock_t	d_OldTime;

	///-------- Effect
	clock_t StartTime;						//골 넣으면
	clock_t StayTime;						//이펙트 보이는 시간

	///-------- Int
	int		g_nStage;						//기본적으로 초기화해주기 위한 스테이지의 정보.
	int		g_nLength;						
	int		g_nGoal;
	int		g_nBallCount;
	int		g_nGoalBallCount;
	int		g_nIsGoal;

	///-------- Time
	clock_t g_LimitTime;

	///-------- Char
	char	g_strPlayer[11];				//플레이어 캐릭터의 크기
};