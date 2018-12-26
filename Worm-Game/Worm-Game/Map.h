#pragma once
#include "Tile.h"
#include "GameMgr.h"

class Map
{
private:
	void infoDraw();
	Tile tile[21][21];
	GameMgr gm;
	int X, Y;
	int key;

public:
	void init();
	void initWorm(Tile worm);
	void drawWorm(Tile worm);
	void moveWorm();
	void initWall(Tile wall);
	void initFeed();
	Tile checkFeed();
};

