#include "pch.h"
#include "GameMgr.h"
#include <Windows.h>
#include <conio.h>


void GameMgr::gotoxy(int x, int y)
{
	HANDLE conH = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD pos;
	pos.X = x;
	pos.Y = y;
	SetConsoleCursorPosition(conH, pos);
}

int GameMgr::keyControl()
{
	char ch = _getch();
	if (ch == 'W' || ch == 'w')
		return UP;
	else if (ch == 'S' || ch == 's')
		return DOWN;
	else if (ch == 'A' || ch == 'a')
		return LEFT;
	else if (ch == 'D' || ch == 'd')
		return RIGHT;
	else if (ch == ' ')
		return SUBMIT;
}

void GameMgr::setColor(int forground, int background)
{
	HANDLE conH = GetStdHandle(STD_OUTPUT_HANDLE);
	int code = forground + background * 16;
	SetConsoleTextAttribute(conH, code);
}

void GameMgr::gameLoop()
{
	int playing = 1;

	while (playing)
	{

	}
}
