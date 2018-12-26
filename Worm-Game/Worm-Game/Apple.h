#pragma once
#include "Feed.h"

class Apple : public Feed
{
private:
	int X;
	int Y;
public:
	Apple();
	void init();
	bool Location();
	void Regen();
};

