#pragma once
#include "Tile.h"
#include "GameMgr.h"

class Worm
{
private:
	Tile head;
	GameMgr gm;

public:
	void init();
	void wormDraw();
	void MoveWorm();
};
