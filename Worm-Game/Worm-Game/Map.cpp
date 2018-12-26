#include "pch.h"
#include "Map.h"
#include "Wall.h"
#include "Worm.h"
#include <Windows.h>
#include <iostream>

using namespace std;

void Map::infoDraw()
{
	gm.gotoxy(56, 2);
	cout << "[ ÀÌ  µ¿ ]";
	gm.gotoxy(56, 3);
	cout << "W  A  S  D";
}

void Map::init()
{
	system("cls");
	Wall wall;
	//Worm worm;
	int x, y;
	x = y = 10;

	while (1)
	{
		system("cls");
		for (int i = 0; i < 21; ++i)
		{
			for (int j = 0; j < 21; ++j)
			{
				tile[i][j].setXY(i, j);
				if (i == 0 || i == 20 || j == 0 || j == 20)
				{
					tile[i][j].setdrawFlag(true);
					tile[i][j].setTileType(WALL);
				}
				wall.wallDraw(tile, i, j);
			}
		}
		infoDraw();
		initWorm(tile[x][y]);
		x += 1;

		Sleep(1000);
	}
	

}

void Map::initWorm(Tile worm)
{
	worm.setTileType(WORM_HEAD);
	worm.setdrawFlag(true);
	drawWorm(worm);
}

void Map::drawWorm(Tile worm)
{
	if (worm.isDraw())
	{
		gm.gotoxy(worm.getX(), worm.getY());
		cout << "¡Ý";
	}
}


