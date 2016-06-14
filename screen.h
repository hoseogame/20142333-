#pragma once
#include "singleton.h"
#define SCREEN Screen::getInstance()

class Screen : public singleton<Screen>
{
public:
	void ScreenInit();
	void ScreenFlipping();
	void ScreenClear();
	void ScreenRelease();
	void ScreenPrint(int, int, char*);
	void SetColor(unsigned short);
};