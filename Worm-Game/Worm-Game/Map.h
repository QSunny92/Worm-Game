#pragma once
#include "Tile.h"
#include "GameMgr.h"

class Map
{
private:
	void infoDraw();
	Tile tile[21][21];
	GameMgr gm;

public:
	void init();
	void initWorm(Tile worm);
	void drawWorm(Tile worm);
};

