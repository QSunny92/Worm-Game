#pragma once
#include "GameMgr.h"

#define EMPTY		100
#define WALL		101
#define WORM_HEAD	102
#define FEED		103

class Tile
{
private:
	int X;
	int Y;
	bool drawFlag;
	int tileType;
	GameMgr gm;

public:
	Tile();
	void setXY(int x, int y);
	int getX();
	int getY();
	void setdrawFlag(bool);
	bool isDraw();
	void setTileType(int );
	int getTileType();

};

