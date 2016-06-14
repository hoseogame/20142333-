#pragma once
#include "system.h"

#define StageMax 3
#define DudagiMax 9

class Dudagi : public System
{
public:
	///------- init
	Dudagi();							// Note: ������ �ʱ�ȭ �Լ�
	virtual ~Dudagi();					
	// Note: �Ҹ��� ���� �Լ�

	///-------- System
	void KeyInput();
	void Init();
	void Init(int, int, int);
	void Init(int, int, int, int, int);
	void Render();
	void Update();

private:
	///-------- Enum
	DUDAGI_STATE	nState[DudagiMax];	//�δ��� ����

	///-------- Public int
	int nX[DudagiMax];
	int nY[DudagiMax];

	///-------- StageInfo
	clock_t LimitTime[StageMax];		//���ѽð�
	clock_t UpLimitTime[StageMax];		//�ö���� �ð�
	clock_t DownLimitTime[StageMax];	//������ �������� �ð�
	int		nCatchDudagi[StageMax];		//��ƾ� �� �δ��� ��

	///-------- Manchi
	clock_t	StartTime;					//Ÿ�� ���°� ���۵� �ð�
	clock_t	DelayTime;					//Ÿ�� ������ ���� �ð�
	int		nIsAttack;					//��ġ ���� 
	int		nIndex;						//��ǥ �迭�� �����ϱ� ���� �ε���
	int		nStayX, nStayY;				//��� ������ �� ��ǥ	

	///-------- Dudagi
	clock_t	StayTime[DudagiMax];		//���� �� ��� �ð�
	clock_t	OutPutTime[DudagiMax];		//������ �� ��� �ð�
	clock_t	OldTime[DudagiMax];			//���� �ð�

	///-------- Int
	int		g_nStage;					//��������
	int		g_nGrade;					//����
	int		g_nStageCount;				//��ǥ����
	int		g_nDudagiCount;				//��ƾ��� �δ�����
	int		g_nTotalGrade;				//������
	int     g_nIsSuccess;				//�˻�
};