#pragma once
#include  "Windows.h"
#include "Worm.h"

class Tail : public virtual Worm
{
private:
	int tail_X;
	int tail_Y;
	int tail_Key;
public:
	Tail();
	void inputXY();
	void init();
	void Move();
	void forward();
	void left();
	void right();
	void down();
	void inputKey();
};

