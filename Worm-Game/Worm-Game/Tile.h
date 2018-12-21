#pragma once
#include "GameMgr.h"

class Tile
{
private:
	int X;
	int Y;
	bool drawFlag;
public:
	Tile();
	void setXY(int x, int y);
	int getX();
	int getY();
	void setdrawFlag(bool);
	bool isDraw();

};

