#pragma once
#include "singleton.h"
#define PRINT Print::getInstance()

class Print : public singleton<Print>
{
public:
	void Mangchi(int, int);
	void MangchiReady(int, int);
	void InitScreen();
	void ReadyScreen();
	void SuccessScreen();
	void RunningScreen();
	void FailureScreen();
	void ResultScreen();

	void fInitScreen();
	void fReadyScreen();
	void fBackScreen();
	void fGoalMessage( int, int );
	void fSuccessScreen();
	void fFailureScreen();
	void fResultScreen();
};