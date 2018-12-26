#pragma once
#include "Tile.h"

class Wall : public Tile
{
public:
	void wallDraw(Tile (*pTile)[21], int i, int j);
};

