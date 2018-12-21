#include "pch.h"
#include "Map.h"
#include "Tile.h"
#include "Wall.h"
#include <Windows.h>
#include <iostream>

void Map::init()
{
	system("cls");
	Tile tile[20][20];
	Wall wall;


	for (int i = 0; i < 20; ++i)
	{
		for (int j = 0; j < 20; ++j)
		{
			tile[i][j].setXY(i, j);
			if (i == 0 || i == 19 || j == 0 || j == 19)
			{
				tile[i][j].setdrawFlag(true);
			}
			wall.wallDraw(tile, i, j);
		}
	}

	Sleep(10000);
}
