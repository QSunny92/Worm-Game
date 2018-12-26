#include "pch.h"
#include "Worm.h"
#include <iostream>
#include <conio.h>
#include <Windows.h>
#include <synchapi.h>

using namespace std;


Worm::Worm()
:X(18), Y(9), Key()
{
	
}

void Worm::initWorm()
{
	gm.gotoxy(X,Y);
	cout << "¡Ý";
}

void Worm::left()
{
	system("cls");
	gm.gotoxy(X,Y);
	cout << "¡Ý";
	Sleep(1000);
	X -= 2;

}

void Worm::right()
{
	system("cls");
	gm.gotoxy(X,Y);
	cout << "¡Ý";
	Sleep(1000);
	X += 2;
}

void Worm::forward()
{
	system("cls");
	gm.gotoxy(X,Y);
	cout << "¡Ý";
	Sleep(1000);
	--Y;
}

void Worm::back()
{
	system("cls");
	gm.gotoxy(X,Y);
	cout << "¡Ý";
	Sleep(1000);
	++Y;
}

void Worm::Move()
{
	while(true)
	{
		InputKey();
		if(this -> Key == UP)
		while (true)
		{
			forward();
			if(_kbhit())
			{
				if(_getch() != 'w' || _getch() != 'W')
					break;
			}
		}

		else if(this -> Key == DOWN)
		while (true)
		{
			back();
			if(_kbhit())
			{
				if(_getch() != 's' || _getch() != 'S')
					break;
			}
		}

		else if(this -> Key == LEFT)
		while (true)
		{
			left();
			if(_kbhit())
			{
				if(_getch() != 'a' || _getch() != 'A')
					break;
			}
		}

		else if(this -> Key == RIGHT)
		while (true)
		{
			right();
			if(_kbhit())
			{
				if(_getch() != 'd' || _getch() != 'D')
					break;
			}
		}
			
	}
	
}

void Worm::InputKey()
{
	GameMgr gm;
	this -> Key = gm.keyControl();
}
