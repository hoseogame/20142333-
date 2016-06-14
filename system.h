#pragma once
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <time.h>
#include <Windows.h>

#include "enum.h"			/// enum
#include "screen.h"
#include "print.h"
#include "singleton.h"

#define SYSTEM System::getInstance()

class Dudagi;
class Soccer;

class System : public singleton<System>
{
public:
	///------- Init
	System();
	~System();

	void		Init(int);

	///------- System
	void		Keyinput(int);

	///------- State
	void		Set_GameState(GAME_STATE);
	int			Get_GameState();

	///------- Time.h
	void		Set_OldTime(clock_t);
	clock_t		Get_OldTime();

	void		Set_StartTime(clock_t);
	clock_t		Get_StartTime();

	void		Set_RemainTime(clock_t);
	clock_t		Get_RemainTime();

	int			Get_Instance(int);

private:
	Dudagi*		c_dudagi;
	Soccer*		c_soccer;

	GAME_STATE	g_nGameState;

	///------- Time.h
	clock_t		g_GameStartTime;
	clock_t		g_UpdateOldTime;
	clock_t		g_RemainTime;
};