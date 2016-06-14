#pragma once
#include "system.h"

#define StageMax 3
#define DudagiMax 9

class Dudagi : public System
{
public:
	///------- init
	Dudagi();							// Note: 생성자 초기화 함수
	virtual ~Dudagi();					
	// Note: 소멸자 제거 함수

	///-------- System
	void KeyInput();
	void Init();
	void Init(int, int, int);
	void Init(int, int, int, int, int);
	void Render();
	void Update();

private:
	///-------- Enum
	DUDAGI_STATE	nState[DudagiMax];	//두더지 상태

	///-------- Public int
	int nX[DudagiMax];
	int nY[DudagiMax];

	///-------- StageInfo
	clock_t LimitTime[StageMax];		//제한시간
	clock_t UpLimitTime[StageMax];		//올라오는 시간
	clock_t DownLimitTime[StageMax];	//내려갈 때까지의 시간
	int		nCatchDudagi[StageMax];		//잡아야 할 두더지 수

	///-------- Manchi
	clock_t	StartTime;					//타격 상태가 시작된 시각
	clock_t	DelayTime;					//타격 상태의 지연 시각
	int		nIsAttack;					//망치 상태 
	int		nIndex;						//좌표 배열에 접근하기 위한 인덱스
	int		nStayX, nStayY;				//대기 상태일 때 좌표	

	///-------- Dudagi
	clock_t	StayTime[DudagiMax];		//들어갔을 때 대기 시간
	clock_t	OutPutTime[DudagiMax];		//나왔을 때 대기 시간
	clock_t	OldTime[DudagiMax];			//이전 시각

	///-------- Int
	int		g_nStage;					//스테이지
	int		g_nGrade;					//점수
	int		g_nStageCount;				//목표점수
	int		g_nDudagiCount;				//잡아야할 두더지수
	int		g_nTotalGrade;				//총점수
	int     g_nIsSuccess;				//검사
};