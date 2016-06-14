#include "system.h"

void main()
{
	int select = 0;


	SCREEN->ScreenInit();
	
	printf("===게임 선택===\n");
	printf("1 - 두더지 게임\n2 - 축구 게임\n");
	printf("===============\n");
	scanf_s("%d", &select);

	if (select == 1 || select == 2)
	{
		SYSTEM->Keyinput(select);
	}
	else
	{
		printf("그런 게임은 없습니다.\n");
	}
	

	SCREEN->ScreenRelease();
}