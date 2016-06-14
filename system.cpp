#include "system.h"
#include "Game01_Dudagi.h"
#include "Game02_Soccer.h"

System::System()
{
}

System::~System()
{
}

void System::Init(int value)
{
	switch (value)
	{
	case DUDAGI:
		c_dudagi = new Dudagi;
		break;
	case SOCCER:
		c_soccer = new Soccer;
		break;
	default:
		break;
	}

	g_nGameState = INIT;
}

void System::Keyinput(int Keyvalue)
{
	int nKey;

	Init(Keyvalue);

	while (1)
	{
		if (_kbhit())
		{
			switch (Keyvalue)
			{
			case DUDAGI:
				c_dudagi->KeyInput();
				break;
			case SOCCER:
				c_soccer->KeyInput();
				break;
			default:
				break;
			}
		}

		switch (Keyvalue)
		{
		case DUDAGI:
			c_dudagi->Update();
			c_dudagi->Render();
			break;
		case SOCCER:
			c_soccer->Render();
			c_soccer->Update();
			break;
		default:
			break;
		}
	}
}

int		System::Get_GameState()					{ return g_nGameState;	  }
void	System::Set_GameState(GAME_STATE value)	{ g_nGameState = value;	  }

clock_t System::Get_OldTime()					{ return g_UpdateOldTime; }
void	System::Set_OldTime(clock_t value)		{ g_UpdateOldTime = value;}

clock_t System::Get_StartTime()					{ return g_GameStartTime; }
void	System::Set_StartTime(clock_t value)	{ g_GameStartTime = value;}

void	System::Set_RemainTime(clock_t value)	{ g_RemainTime = value;   }
clock_t System::Get_RemainTime()				{ return g_RemainTime;	  }

int		System::Get_Instance(int value)			{ return c_soccer->Get_Instance(value); }