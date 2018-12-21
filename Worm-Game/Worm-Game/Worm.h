#pragma once
class Worm
{
private:
	int X;
	int Y;
	int Key;
	int HeadX;
	int HeadY;
	int Body;
	int Tail;
public:
	void Move();
	void Size();
	void Speed();
	void gotoxy(int x, int y);
};

