#include "pch.h"
#include "Tile.h"

Tile::Tile()
:X(0), Y(0), drawFlag(0)
{
}

void Tile::setXY(int x, int y)
{
	X = x * 2;
	Y = y;
}

int Tile::getX()
{
	return X;
}

int Tile::getY()
{
	return Y;
}

void Tile::setdrawFlag(bool a)
{
	drawFlag = a;
}
bool Tile::isDraw()
{
	return drawFlag;
}
/*
void Tile::draw()
{
	GameMgr gm;
	gm.gotoxy(X, Y);
	gm.setColor(15, 15);
	cout << "бс";
	gm.setColor(15, 0);
}
*/