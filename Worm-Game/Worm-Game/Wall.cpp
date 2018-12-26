#include "pch.h"
#include "Wall.h"
#include "GameMgr.h"
#include <iostream>

using namespace std;

void Wall::wallDraw(Tile (*pTile)[21], int i, int j)
{
	GameMgr gm;

	if (pTile[i][j].isDraw())
	{
		gm.gotoxy(pTile[i][j].getX(), pTile[i][j].getY());
		gm.setColor(15, 15);
		cout << "бс";
		gm.setColor(15, 0);
	}
}
