#include "pch.h"
#include "Worm.h"
#include <cstdio>
#include <conio.h>
#include <list>
#include <Windows.h>
#include <iostream>
#define Max 6
#define SPEED 0.5
using namespace std;


void Worm::Move()
{
	int x = 18;
	int y = 9;
	gotoxy(x, y);
	cout << "¡Ý";

	while(1)
	{
		int key;
		key = _getch();
		if(key == 'W' || key == 'w')
		{
			if(true)
			y -= 1;
			system("cls");
			gotoxy(x,y);
			cout << "¡Ý";
			Sleep(1000);
		}
		/*	gotoxy(x,y);
			cout << "¡Û";
			gotoxy(x,y-2);
			cout << "¡Ý"; */
		else if(key == 'S' || key == 's')
		{
			y += 1;
			system("cls");
			gotoxy(x, y);
			cout << "¡Ý";
			Sleep(1000);
		/*	gotoxy(x,y);
			cout << "¡Û";
			gotoxy(x,y+2);
			cout << "¡Ý"; */
		}
		else if(key == 'A' || key == 'a')
		{
			x -=2;
			system("cls");
			gotoxy(x, y);
			cout << "¡Ý";
			Sleep(1000);
		/*	gotoxy(x,y);
			cout << "¡Û";
			gotoxy(x+2,y);
			cout << "¡Ý";
		*/}
		else if(key == 'D' || key == 'd')
		{
			x +=2;
			system("cls");
			gotoxy(x,y);
		/*	gotoxy(x-2,y);
			cout << "¡Ý";
			gotoxy(x,y);
			cout << "¡Û";
		*/
			cout << "¡Ý";
			Sleep(1000);
		}
	}
}

void Worm::Size()
{
	/*
	list<int> Worm;
	for(int i = 0; i < Max; ++i)
	{
		Worm.
	}
	*/
}
/*
void Worm::Speed()
{
	int sp;
	for(int i = 0; i < SPEED; ++i)
	{
		sp++;	
	}
}
*/
void Worm::gotoxy(int x, int y)
{
   HANDLE conH = GetStdHandle(STD_OUTPUT_HANDLE);
   COORD pos;
   pos.X = x;
   pos.Y = y;
   SetConsoleCursorPosition(conH, pos);
}