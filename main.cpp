#include "system.h"

void main()
{
	int select = 0;


	SCREEN->ScreenInit();
	
	printf("===���� ����===\n");
	printf("1 - �δ��� ����\n2 - �౸ ����\n");
	printf("===============\n");
	scanf_s("%d", &select);

	if (select == 1 || select == 2)
	{
		SYSTEM->Keyinput(select);
	}
	else
	{
		printf("�׷� ������ �����ϴ�.\n");
	}
	

	SCREEN->ScreenRelease();
}