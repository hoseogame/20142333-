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
	int		s_nGoalBall[StageMax];			//�־���� ��
	int	   	s_nGoalDaeLength[StageMax];		//������
	int		s_nGoalDaeX[StageMax];			//��� x��ġ
	int		s_nGoalDaeY[StageMax];			//��� y��ġ
	int		s_nDist[StageMax];
	clock_t	s_LimitTime[StageMax];			//���������� ���ѽð�
	clock_t	s_MoveTime[StageMax];			//�����̴� �ð�

	///-------- Player
	int		p_nCenterX, p_nCenterY;			//ĳ���� �� �߾�
	int		p_nMoveX, p_nMoveY;				// ĳ���� ������
	int		p_nX, p_nY;						// ĳ���� ��ǥ
	clock_t	p_StartTime;					

	///-------- Ball
	int		b_nIsReady;						//���� �ִ��� ������
	int		b_nMoveX, b_nMoveY;				//����ġ
	clock_t	b_MoveTime;						//�� ����ð�
	clock_t	b_OldTime;						//����ð� üũ

	///-------- GoalDae
	int		d_nMoveX, d_nMoveY;				//������
	int		d_nLength;						//����
	int		d_nLineX[7];					
	int		d_nDist;
	clock_t	d_MoveTime;
	clock_t	d_OldTime;

	///-------- Effect
	clock_t StartTime;						//�� ������
	clock_t StayTime;						//����Ʈ ���̴� �ð�

	///-------- Int
	int		g_nStage;						//�⺻������ �ʱ�ȭ���ֱ� ���� ���������� ����.
	int		g_nLength;						
	int		g_nGoal;
	int		g_nBallCount;
	int		g_nGoalBallCount;
	int		g_nIsGoal;

	///-------- Time
	clock_t g_LimitTime;

	///-------- Char
	char	g_strPlayer[11];				//�÷��̾� ĳ������ ũ��
};