#include "system.h"

void Print::Mangchi(int x, int y)
{
	SCREEN->ScreenPrint(x - 4, y - 1, "�٦�����");
	SCREEN->ScreenPrint(x - 4, y,     "�����Φ�������");
	SCREEN->ScreenPrint(x - 4, y + 1, "�٦�����");
}

void Print::MangchiReady(int x, int y)
{
	SCREEN->ScreenPrint(x - 4, y - 2, "    ��");
	SCREEN->ScreenPrint(x - 4, y - 1, "  ������");
	SCREEN->ScreenPrint(x - 4, y,     "  ��  ��");
	SCREEN->ScreenPrint(x - 4, y + 1, "  ������");
	SCREEN->ScreenPrint(x - 4, y + 2, "    ��");
	SCREEN->ScreenPrint(x - 4, y + 3, "    ��");
	SCREEN->ScreenPrint(x - 4, y + 4, "    ��");
	SCREEN->ScreenPrint(x - 4, y + 5, "    ��");
}

void Print::InitScreen()
{
	SCREEN->ScreenPrint(0,  0, "��������������������������������������������");
	SCREEN->ScreenPrint(0,  1, "��                                        ��");
	SCREEN->ScreenPrint(0,  2, "��                                        ��");
	SCREEN->ScreenPrint(0,  3, "��                                        ��");
	SCREEN->ScreenPrint(0,  4, "��                                        ��");
	SCREEN->ScreenPrint(0,  5, "��                                        ��");
	SCREEN->ScreenPrint(0,  6, "��                                        ��");
	SCREEN->ScreenPrint(0,  7, "��                                        ��");
	SCREEN->ScreenPrint(0,  8, "��             ////////                   ��");
	SCREEN->ScreenPrint(0,  9, "��             ���� /�� ����/             ��");
	SCREEN->ScreenPrint(0, 10, "��             ����������������           ��");
	SCREEN->ScreenPrint(0, 11, "��             ����������������           ��");
	SCREEN->ScreenPrint(0, 12, "��                                        ��");
	SCREEN->ScreenPrint(0, 13, "��                                        ��");
	SCREEN->ScreenPrint(0, 14, "��                                        ��");
	SCREEN->ScreenPrint(0, 15, "��             �δ��� ��� ����           ��");
	SCREEN->ScreenPrint(0, 16, "��                                        ��");
	SCREEN->ScreenPrint(0, 17, "��          space Ű�� �����ּ���         ��");
	SCREEN->ScreenPrint(0, 18, "��                                        ��");
	SCREEN->ScreenPrint(0, 19, "��                                        ��");
	SCREEN->ScreenPrint(0, 20, "��                                        ��");
	SCREEN->ScreenPrint(0, 21, "��                                        ��");
	SCREEN->ScreenPrint(0, 22, "��                                        ��");
	SCREEN->ScreenPrint(0, 23, "��������������������������������������������");
}

void Print::ReadyScreen()
{
	SCREEN->ScreenPrint(0,  0, "��������������������������������������������");
	SCREEN->ScreenPrint(0,  1, "����������������������᦭");
	SCREEN->ScreenPrint(0,  2, "����������������������᦭");
	SCREEN->ScreenPrint(0,  3, "����������������������᦭");
	SCREEN->ScreenPrint(0,  4, "����������������������᦭");
	SCREEN->ScreenPrint(0,  5, "����������������������᦭");
	SCREEN->ScreenPrint(0,  6, "����������������������᦭");
	SCREEN->ScreenPrint(0,  7, "����������������������᦭");
	SCREEN->ScreenPrint(0,  8, "����������������������᦭");
	SCREEN->ScreenPrint(0,  9, "����������������������᦭");
	SCREEN->ScreenPrint(0, 10, "��������                    �����᦭");
	SCREEN->ScreenPrint(0, 11, "��������        ��������    �����᦭");
	SCREEN->ScreenPrint(0, 12, "��������                    �����᦭");
	SCREEN->ScreenPrint(0, 13, "����������������������᦭");
	SCREEN->ScreenPrint(0, 14, "����������������������᦭");
	SCREEN->ScreenPrint(0, 15, "����������������������᦭");
	SCREEN->ScreenPrint(0, 16, "����������������������᦭");
	SCREEN->ScreenPrint(0, 17, "����������������������᦭");
	SCREEN->ScreenPrint(0, 18, "����������������������᦭");
	SCREEN->ScreenPrint(0, 19, "����������������������᦭");
	SCREEN->ScreenPrint(0, 20, "����������������������᦭");
	SCREEN->ScreenPrint(0, 21, "����������������������᦭");
	SCREEN->ScreenPrint(0, 22, "����������������������᦭");
	SCREEN->ScreenPrint(0, 23, "��������������������������������������������");
}

void Print::SuccessScreen()
{
	SCREEN->ScreenPrint(0,  0, "��������������������������������������������");
	SCREEN->ScreenPrint(0,  1, "��                                        ��");
	SCREEN->ScreenPrint(0,  2, "��                                        ��");
	SCREEN->ScreenPrint(0,  3, "��                                        ��");
	SCREEN->ScreenPrint(0,  4, "��             // / // ������             ��");
	SCREEN->ScreenPrint(0,  5, "��             ��/��    /������           ��");
	SCREEN->ScreenPrint(0,  6, "��             ����  ��  �զ���           ��");
	SCREEN->ScreenPrint(0,  7, "��              ��_________///            ��");
	SCREEN->ScreenPrint(0,  8, "��                                        ��");
	SCREEN->ScreenPrint(0,  9, "��                                        ��");
	SCREEN->ScreenPrint(0, 10, "��                                        ��");
	SCREEN->ScreenPrint(0, 11, "��                       ��������         ��");
	SCREEN->ScreenPrint(0, 12, "��                                        ��");
	SCREEN->ScreenPrint(0, 13, "��                   �̼� ���� !!!!       ��");
	SCREEN->ScreenPrint(0, 14, "��                                        ��");
	SCREEN->ScreenPrint(0, 15, "��                                        ��");
	SCREEN->ScreenPrint(0, 16, "��                                        ��");
	SCREEN->ScreenPrint(0, 17, "��     ���� �δ��� :                      ��");
	SCREEN->ScreenPrint(0, 18, "��                                        ��");
	SCREEN->ScreenPrint(0, 19, "��     ���� :                             ��");
	SCREEN->ScreenPrint(0, 20, "��                                        ��");
	SCREEN->ScreenPrint(0, 21, "��                                        ��");
	SCREEN->ScreenPrint(0, 22, "��                                        ��");
	SCREEN->ScreenPrint(0, 23, "��������������������������������������������");
}

void Print::RunningScreen()
{
	SCREEN->ScreenPrint(0,  0, "��������������������������������������������");
	SCREEN->ScreenPrint(0,  1, "��                                        ��");
	SCREEN->ScreenPrint(0,  2, "��                                        ��");
	SCREEN->ScreenPrint(0,  3, "��                                        ��");
	SCREEN->ScreenPrint(0,  4, "��                                        ��");
	SCREEN->ScreenPrint(0,  5, "��                                        ��");
	SCREEN->ScreenPrint(0,  6, "��                                        ��");
	SCREEN->ScreenPrint(0,  7, "��                                        ��");
	SCREEN->ScreenPrint(0,  8, "��                                        ��");
	SCREEN->ScreenPrint(0,  9, "��                                        ��");
	SCREEN->ScreenPrint(0, 10, "��                                        ��");
	SCREEN->ScreenPrint(0, 11, "��                                        ��");
	SCREEN->ScreenPrint(0, 12, "��                                        ��");
	SCREEN->ScreenPrint(0, 13, "��                                        ��");
	SCREEN->ScreenPrint(0, 14, "��                                        ��");
	SCREEN->ScreenPrint(0, 15, "��                                        ��");
	SCREEN->ScreenPrint(0, 16, "��                                        ��");
	SCREEN->ScreenPrint(0, 17, "��                                        ��");
	SCREEN->ScreenPrint(0, 18, "��                                        ��");
	SCREEN->ScreenPrint(0, 19, "��                            ��    ��    ��");
	SCREEN->ScreenPrint(0, 20, "��                          ���ᦰ���র  ��");
	SCREEN->ScreenPrint(0, 21, "��                            ����  ����  ��");
	SCREEN->ScreenPrint(0, 22, "��                                        ��");
	SCREEN->ScreenPrint(0, 23, "��������������������������������������������");
}

void Print::FailureScreen()
{
	SCREEN->ScreenPrint(0,  0, "��������������������������������������������");
	SCREEN->ScreenPrint(0,  1, "��                                        ��");
	SCREEN->ScreenPrint(0,  2, "��                                        ��");
	SCREEN->ScreenPrint(0,  3, "��                                        ��");
	SCREEN->ScreenPrint(0,  4, "��                                        ��");
	SCREEN->ScreenPrint(0,  5, "��                                        ��");
	SCREEN->ScreenPrint(0,  6, "��             ��-����-��                 ��");
	SCREEN->ScreenPrint(0,  7, "��             d ��,.�� b                 ��");
	SCREEN->ScreenPrint(0,  8, "��             ���Ѧ��Ҧ�                 ��");
	SCREEN->ScreenPrint(0,  9, "��             �Ŧͦ��ɦ�                 ��");
	SCREEN->ScreenPrint(0, 10, "��               �Ʀ���                   ��");
	SCREEN->ScreenPrint(0, 11, "��                    ��������            ��");
	SCREEN->ScreenPrint(0, 12, "��                                        ��");
	SCREEN->ScreenPrint(0, 13, "��            �̼� ���� !!!!              ��");
	SCREEN->ScreenPrint(0, 14, "��                                        ��");
	SCREEN->ScreenPrint(0, 15, "��                                        ��");
	SCREEN->ScreenPrint(0, 16, "��                                        ��");
	SCREEN->ScreenPrint(0, 17, "��      �ٽ� �Ͻðڽ��ϱ�? ( y/n )        ��");
	SCREEN->ScreenPrint(0, 18, "��                                        ��");
	SCREEN->ScreenPrint(0, 19, "��                                        ��");
	SCREEN->ScreenPrint(0, 20, "��                                        ��");
	SCREEN->ScreenPrint(0, 21, "��                                        ��");
	SCREEN->ScreenPrint(0, 22, "��                                        ��");
	SCREEN->ScreenPrint(0, 23, "��������������������������������������������");
}

// Note: ���� ���� ��쿡 ��µǸ鼭 �ٽ� �Ұ������� ���� ȭ���̴�.

void Print::ResultScreen()
{
	SCREEN->ScreenPrint(0,  0, "��������������������������������������������");
	SCREEN->ScreenPrint(0,  1, "��                                        ��");
	SCREEN->ScreenPrint(0,  2, "��                                        ��");
	SCREEN->ScreenPrint(0,  3, "��                                        ��");
	SCREEN->ScreenPrint(0,  4, "��                                        ��");
	SCREEN->ScreenPrint(0,  5, "��                                        ��");
	SCREEN->ScreenPrint(0,  6, "��                                        ��");
	SCREEN->ScreenPrint(0,  7, "��  (((    �δ��� ��� ���� Score  ))))   ��");
	SCREEN->ScreenPrint(0,  8, "��                                        ��");
	SCREEN->ScreenPrint(0,  9, "��                                        ��");
	SCREEN->ScreenPrint(0, 10, "��                                        ��");
	SCREEN->ScreenPrint(0, 11, "��           �� ����  :                   ��");
	SCREEN->ScreenPrint(0, 12, "��                                        ��");
	SCREEN->ScreenPrint(0, 13, "��                                        ��");
	SCREEN->ScreenPrint(0, 14, "��                                        ��");
	SCREEN->ScreenPrint(0, 15, "��                                        ��");
	SCREEN->ScreenPrint(0, 16, "��                                        ��");
	SCREEN->ScreenPrint(0, 17, "��                                        ��");
	SCREEN->ScreenPrint(0, 18, "��                                        ��");
	SCREEN->ScreenPrint(0, 19, "��                                        ��");
	SCREEN->ScreenPrint(0, 20, "��                                        ��");
	SCREEN->ScreenPrint(0, 21, "��                                        ��");
	SCREEN->ScreenPrint(0, 22, "��                                        ��");
	SCREEN->ScreenPrint(0, 23, "��������������������������������������������");
}

void Print::fInitScreen()
{

	SCREEN->ScreenPrint(0,  0, "����������������������������������������������");
	SCREEN->ScreenPrint(0,  1, "��                                          ��");
	SCREEN->ScreenPrint(0,  2, "��             �ব������                   ��");
	SCREEN->ScreenPrint(0,  3, "��                                          ��");
	SCREEN->ScreenPrint(0,  4, "��                        ///.   ��~~~      ��");
	SCREEN->ScreenPrint(0,  5, "��                       (^.^)              ��");
	SCREEN->ScreenPrint(0,  6, "��                      ���� ����           ��");
	SCREEN->ScreenPrint(0,  7, "��                         ����             ��");
	SCREEN->ScreenPrint(0,  8, "��                     ��  ����             ��");
	SCREEN->ScreenPrint(0,  9, "��                                          ��");
	SCREEN->ScreenPrint(0, 10, "��                                          ��");
	SCREEN->ScreenPrint(0, 11, "��       �� ���� ����  Go! Go!              ��");
	SCREEN->ScreenPrint(0, 12, "��                                          ��");
	SCREEN->ScreenPrint(0, 13, "��                                          ��");
	SCREEN->ScreenPrint(0, 14, "��       j :���� l : ������ k :��           ��");
	SCREEN->ScreenPrint(0, 15, "��                                          ��");
	SCREEN->ScreenPrint(0, 16, "��                                          ��");
	SCREEN->ScreenPrint(0, 17, "��                                          ��");
	SCREEN->ScreenPrint(0, 18, "��        ���ܦ�  space Ű�� �����ּ���     ��");
	SCREEN->ScreenPrint(0, 19, "��                                          ��");
	SCREEN->ScreenPrint(0, 20, "��                                          ��");
	SCREEN->ScreenPrint(0, 21, "��                                          ��");
	SCREEN->ScreenPrint(0, 22, "����������������������������������������������");
}
void Print::fBackScreen()
{
	char string[100];

	SCREEN->ScreenPrint(0,  0, "����������������������������������������������");
	SCREEN->ScreenPrint(0,  1, "��                                          ��");
	SCREEN->ScreenPrint(0,  2, "��                                          ��");
	SCREEN->ScreenPrint(0,  3, "��                                          ��");
	sprintf_s		  (string, "��                                          ����������: %d", SYSTEM->Get_Instance(0) + 1);						SCREEN->ScreenPrint(0, 4, string);
	SCREEN->ScreenPrint(0,  5, "��                                          ��");
	sprintf_s		  (string, "�������������������������������������������������� �ð�: %d", SYSTEM->Get_Instance(1) / 1000);					SCREEN->ScreenPrint(0, 6, string);
	SCREEN->ScreenPrint(0,  7, "��                                          ��");
	sprintf_s		  (string, "��                                          ������ �ð�: %d", (clock() - SYSTEM->Get_Instance(2)) / 1000 );		SCREEN->ScreenPrint(0, 8, string);
	SCREEN->ScreenPrint(0,  9, "��                                          ��");
	sprintf_s		  (string, "��                                          ����ǥ ����: %d ", SYSTEM->Get_Instance(3));						SCREEN->ScreenPrint(0, 10, string);
	SCREEN->ScreenPrint(0, 11, "��                                          ��");
	sprintf_s		  (string, "��                                          ������ �� ����: %d ", SYSTEM->Get_Instance(4));						SCREEN->ScreenPrint(0, 12, string);
	SCREEN->ScreenPrint(0, 13, "��                                          ��");
	sprintf_s		  (string, "��                                          ��");																SCREEN->ScreenPrint(0, 14, string);
	SCREEN->ScreenPrint(0, 15, "��                                          ��");
	sprintf_s		  (string, "��                                          ��");																SCREEN->ScreenPrint(0, 16, string);
	SCREEN->ScreenPrint(0, 17, "��                                          ��");
	SCREEN->ScreenPrint(0, 18, "��                                          ��");
	SCREEN->ScreenPrint(0, 19, "��                                          ��");
	SCREEN->ScreenPrint(0, 20, "��                                          ��");
	SCREEN->ScreenPrint(0, 21, "��                                          ��");
	SCREEN->ScreenPrint(0, 22, "��                                          ��");
	SCREEN->ScreenPrint(0, 23, "����������������������������������������������");
}

void Print::fReadyScreen()
{
	char string[100];

	SCREEN->ScreenPrint(0,  0, "����������������������������������������������");
	SCREEN->ScreenPrint(0,  1, "�����������������������᦭");
	SCREEN->ScreenPrint(0,  2, "�����������������������᦭");
	SCREEN->ScreenPrint(0,  3, "�����������������������᦭");
	SCREEN->ScreenPrint(0,  4, "�����������������������᦭");
	SCREEN->ScreenPrint(0,  5, "�����������������������᦭");
	SCREEN->ScreenPrint(0,  6, "�����������������������᦭");
	SCREEN->ScreenPrint(0,  7, "�����������������������᦭");
	SCREEN->ScreenPrint(0,  8, "�����������������������᦭");
	SCREEN->ScreenPrint(0,  9, "�����������������������᦭");
	SCREEN->ScreenPrint(0, 10, "��������                    ������᦭");
	sprintf_s		  (string, "��������     %d   ��������   ������᦭", SYSTEM->Get_Instance(0) + 1);
	SCREEN->ScreenPrint(0, 11, string);
	SCREEN->ScreenPrint(0, 12, "��������                    ������᦭");
	SCREEN->ScreenPrint(0, 13, "�����������������������᦭");
	SCREEN->ScreenPrint(0, 14, "�����������������������᦭");
	SCREEN->ScreenPrint(0, 15, "�����������������������᦭");
	SCREEN->ScreenPrint(0, 16, "�����������������������᦭");
	SCREEN->ScreenPrint(0, 17, "�����������������������᦭");
	SCREEN->ScreenPrint(0, 18, "�����������������������᦭");
	SCREEN->ScreenPrint(0, 19, "�����������������������᦭");
	SCREEN->ScreenPrint(0, 20, "�����������������������᦭");
	SCREEN->ScreenPrint(0, 21, "�����������������������᦭");
	SCREEN->ScreenPrint(0, 22, "�����������������������᦭");
	SCREEN->ScreenPrint(0, 23, "����������������������������������������������");

}

void Print::fGoalMessage(int nX, int nY)
{
	SCREEN->ScreenPrint(nX, nY, "�� )) ���� (( ��");
	SCREEN->ScreenPrint(nX, nY + 1, "��(^^')/ ��(\"*')/");
	SCREEN->ScreenPrint(nX, nY + 2, "   ��       ��");
	SCREEN->ScreenPrint(nX, nY + 3, "  ����    ����");
}

void Print::fSuccessScreen()
{
	SCREEN->ScreenPrint(0, 0, "����������������������������������������������");
	SCREEN->ScreenPrint(0, 1, "��                                          ��");
	SCREEN->ScreenPrint(0, 2, "��                                          ��");
	SCREEN->ScreenPrint(0, 3, "��                                          ��");
	SCREEN->ScreenPrint(0, 4, "��                                          ��");
	SCREEN->ScreenPrint(0, 5, "��                                          ��");
	SCREEN->ScreenPrint(0, 6, "��                ////����                  ��");
	SCREEN->ScreenPrint(0, 7, "��               q ��  �� p                 ��");
	SCREEN->ScreenPrint(0, 8, "��               (��������)                 ��");
	SCREEN->ScreenPrint(0, 9, "��             �� �̼� ���� ��              ��");
	SCREEN->ScreenPrint(0, 10, "��                                          ��");
	SCREEN->ScreenPrint(0, 11, "��                                          ��");
	SCREEN->ScreenPrint(0, 12, "��                                          ��");
	SCREEN->ScreenPrint(0, 13, "��                                          ��");
	SCREEN->ScreenPrint(0, 14, "��                                          ��");
	SCREEN->ScreenPrint(0, 15, "��                                          ��");
	SCREEN->ScreenPrint(0, 16, "��                                          ��");
	SCREEN->ScreenPrint(0, 17, "��                                          ��");
	SCREEN->ScreenPrint(0, 18, "��                                          ��");
	SCREEN->ScreenPrint(0, 19, "��                                          ��");
	SCREEN->ScreenPrint(0, 20, "��                                          ��");
	SCREEN->ScreenPrint(0, 21, "��                                          ��");
	SCREEN->ScreenPrint(0, 22, "��                                          ��");
	SCREEN->ScreenPrint(0, 23, "����������������������������������������������");
}

void Print::fFailureScreen()
{
	SCREEN->ScreenPrint(0, 0, "����������������������������������������������");
	SCREEN->ScreenPrint(0, 1, "��                                          ��");
	SCREEN->ScreenPrint(0, 2, "��                                          ��");
	SCREEN->ScreenPrint(0, 3, "��                                          ��");
	SCREEN->ScreenPrint(0, 4, "��                                          ��");
	SCREEN->ScreenPrint(0, 5, "��                                          ��");
	SCREEN->ScreenPrint(0, 6, "��                                          ��");
	SCREEN->ScreenPrint(0, 7, "��                                          ��");
	SCREEN->ScreenPrint(0, 8, "��                                          ��");
	SCREEN->ScreenPrint(0, 9, "��                                          ��");
	SCREEN->ScreenPrint(0, 10, "��                                          ��");
	SCREEN->ScreenPrint(0, 11, "��                    �̼� ���� !!!!        ��");
	SCREEN->ScreenPrint(0, 12, "��                                          ��");
	SCREEN->ScreenPrint(0, 13, "��                                          ��");
	SCREEN->ScreenPrint(0, 14, "��                 �ܦ�����                 ��");
	SCREEN->ScreenPrint(0, 15, "��                   ��  ��                 ��");
	SCREEN->ScreenPrint(0, 16, "��                  �����                ��");
	SCREEN->ScreenPrint(0, 17, "��                                          ��");
	SCREEN->ScreenPrint(0, 18, "��        �ٽ� �Ͻðڽ��ϱ�? (y/n)          ��");
	SCREEN->ScreenPrint(0, 19, "��                                          ��");
	SCREEN->ScreenPrint(0, 20, "��                                          ��");
	SCREEN->ScreenPrint(0, 21, "��                                          ��");
	SCREEN->ScreenPrint(0, 22, "����������������������������������������������");
}


void Print::fResultScreen()
{
	char string[100];
	SCREEN->ScreenPrint(0, 0, "����������������������������������������������");
	SCREEN->ScreenPrint(0, 1, "��                                          ��");
	SCREEN->ScreenPrint(0, 2, "��                                          ��");
	SCREEN->ScreenPrint(0, 3, "��             �ব������                   ��");
	SCREEN->ScreenPrint(0, 4, "��                                          ��");
	SCREEN->ScreenPrint(0, 5, "��                                          ��");
	SCREEN->ScreenPrint(0, 6, "��                                          ��");
	SCREEN->ScreenPrint(0, 7, "��                                          ��");
	sprintf_s(string, "��      ������ �������� :  %2d               ��", SYSTEM->Get_Instance(0) + 1);
	SCREEN->ScreenPrint(0, 8, string);
	SCREEN->ScreenPrint(0, 9, "��                                          ��");
	SCREEN->ScreenPrint(0, 10, "��                                          ��");
	SCREEN->ScreenPrint(0, 11, "��   ___�ƢƢ�___                           ��");
	SCREEN->ScreenPrint(0, 12, "��     (*^  ^*)                             ��");
	SCREEN->ScreenPrint(0, 13, "�� =====��==��=====                         ��");
	SCREEN->ScreenPrint(0, 14, "��                                          ��");
	SCREEN->ScreenPrint(0, 15, "��                                          ��");
	SCREEN->ScreenPrint(0, 16, "��                                          ��");
	SCREEN->ScreenPrint(0, 17, "��                                          ��");
	SCREEN->ScreenPrint(0, 18, "��                      ���ܦ�              ��");
	SCREEN->ScreenPrint(0, 19, "��                                          ��");
	SCREEN->ScreenPrint(0, 20, "��                                          ��");
	SCREEN->ScreenPrint(0, 21, "��                                          ��");
	SCREEN->ScreenPrint(0, 22, "����������������������������������������������");
}