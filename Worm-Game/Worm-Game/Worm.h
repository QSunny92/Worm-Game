#pragma once
#include "GameMgr.h"

class Worm
{
private:
	GameMgr gm;
public:
	int X;
	int Y;
	int Key;
	Worm();
	void initWorm();
	void left();
	void right();
	void forward();
	void back();
	void Move();
	void InputKey();

};
