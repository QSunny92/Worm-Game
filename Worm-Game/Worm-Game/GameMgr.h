#pragma once
#define WindowSizeX 80
#define WindowSizeY 20

#define UP 0
#define DOWN 1
#define RIGHT 2
#define LEFT 3
#define SUBMIT 4

class GameMgr
{
public:
	void gotoxy(int x, int y);
	int keyControl();
	void setColor(int forground, int background);

};

