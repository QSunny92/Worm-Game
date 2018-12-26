#pragma once
#include "GameMgr.h"

#define WALL 100
#define WORM_HEAD 101

class Tile
{
private:
	int X;
	int Y;
	bool drawFlag;
	int tileType;

public:
	Tile();
	void setXY(int x, int y);
	int getX();
	int getY();
	void setdrawFlag(bool);
	bool isDraw();
	void setTileType(int );

};

