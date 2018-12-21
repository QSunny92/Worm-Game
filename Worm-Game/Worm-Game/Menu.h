#pragma once
#include <Windows.h>
#include "GameMgr.h"



class Menu
{
private:
	GameMgr gm;

public:
	//Menu();
	void init();
	int menuDraw();
	void helpDraw();
};

