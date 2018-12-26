#include "pch.h"
#include "Map.h"
#include "Wall.h"
#include "Worm.h"
#include <Windows.h>
#include <iostream>
#include <conio.h>
#include <cstdlib>
#include <ctime>

using namespace std;

void Map::infoDraw()
{
	gm.gotoxy(56, 2);
	cout << "[ 이  동 ]";
	gm.gotoxy(56, 3);
	cout << "W  A  S  D";

	gm.gotoxy(52, 13);
	cout << "지렁이 머리 : " << X << ", " << Y;
}

void Map::init()
{
	//system("cls");

	X = Y = 10;
	key = RIGHT;

	while (gm.getGameStatus())
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
				initWall(tile[i][j]);
			}
		}
		
		tile[X][Y].setTileType(EMPTY);
		tile[X][Y].setdrawFlag(false);

		moveWorm();
		initWorm(tile[X][Y]);
		if (_kbhit())
			key = gm.keyControl();

		initFeed();


		infoDraw();

		Sleep(500);
	}
	

}

void Map::initWorm(Tile wormHead)
{
	if (wormHead.getTileType() == WALL)
		gm.setGameStatus(GAMEOVER);
	else
	{
		if (wormHead.getTileType() == FEED)
		{

		}
		wormHead.setTileType(WORM_HEAD);
		wormHead.setdrawFlag(true);
		drawWorm(wormHead);
	}
}

void Map::drawWorm(Tile wormHead)
{
	if (wormHead.isDraw())
	{
		gm.gotoxy(wormHead.getX(), wormHead.getY());
		cout << "◎";
		//몸통이 있을때는 다시 생각해봐야함
	}
}

void Map::moveWorm()
{
	if (key == UP)
		--Y;
	else if (key == DOWN)
		++Y;
	else if (key == RIGHT)
		++X;
	else if (key == LEFT)
		--X;
}

void Map::initWall(Tile wall)
{
	if (wall.isDraw() && wall.getTileType() == WALL)
	{
		gm.gotoxy(wall.getX(), wall.getY());
		gm.setColor(15, 15);
		cout << "■";
		gm.setColor(15, 0);
	}
}

void Map::initFeed()
{
	Tile feed = checkFeed();

	if (feed.getTileType() != FEED)
	{
		srand(time(NULL));
		int randX = (rand() % 19) + 1;
		int randY = (rand() % 19) + 1;

		while (1)
		{
			if (tile[randX][randY].isDraw())
			{
				randX = (rand() % 19) + 1;
				randY = (rand() % 19) + 1;
			}
			else
				break;
		}
		tile[randX][randY].setdrawFlag(true);
		tile[randX][randY].setXY(randX, randY);
		tile[randX][randY].setTileType(FEED);
		gm.gotoxy(tile[randX][randY].getX(), tile[randX][randY].getY());
		cout << "☆";
	}
	else
	{
		gm.gotoxy(feed.getX(), feed.getY());
		cout << "☆";
	}
	

	
}

Tile Map::checkFeed()
{
	for (int i = 0; i < 21; ++i)
	{
		for (int j = 0; j < 21; ++j)
		{
			if (tile[i][j].getTileType() == FEED)
				return tile[i][j];
		}
	}
	
	return tile[0][0];
}

