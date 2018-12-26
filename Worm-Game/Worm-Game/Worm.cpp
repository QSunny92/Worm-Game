#include "pch.h"
#include "Worm.h"
#include <iostream>
#include <Windows.h>

using namespace std;

void Worm::init()
{
	head.setXY(10, 10);
	head.setdrawFlag(true);
}

void Worm::wormDraw()
{
	if (head.isDraw())
	{
		gm.gotoxy(head.getX(), head.getY());
		cout << "¡Ý";
	}
}

void Worm::MoveWorm()
{
	int x = head.getX() / 2;
	int y = head.getY();
	head.setXY(x, y);
	head.setdrawFlag(false);
	x = x + 1;
	head.setXY(x, y);
	head.setdrawFlag(true);
}
