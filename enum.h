#pragma once

typedef enum _GAME_STATE
{
	INIT,
	READY,
	RUNNING,
	SUCCESS,
	FAILED,
	STOP,
	RESULT
} GAME_STATE;

typedef enum _DUDAGI_STATE 
{ 
	SETUP, 
	UP,
	DOWN
} DUDAGI_STATE;

typedef enum _GAME_TYPE
{
	DUDAGI = 1,
	SOCCER
} GAME_TYPE;
