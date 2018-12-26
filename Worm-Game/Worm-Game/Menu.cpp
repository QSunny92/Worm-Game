#include "pch.h"
#include "Menu.h"
#include <iostream>

using namespace std;

void Menu::init()
{
	system("mode con: cols=80 lines=20");
	HANDLE conH = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_CURSOR_INFO conCursor;
	conCursor.bVisible = 0;
	conCursor.dwSize = 1;
	SetConsoleCursorInfo(conH, &conCursor);
}

int Menu::menuDraw()
{
	int x = 35;
	int y = 9;
	gm.gotoxy(x-2, y);
	cout << "> Game Start";
	gm.gotoxy(x, y+1);
	cout << "   Help";
	gm.gotoxy(x, y+2);
	cout << "   Exit";

	while (1)
	{
		int n = gm.keyControl();
		switch (n)
		{
		case UP:
			if (y > 9)
			{
				gm.gotoxy(x - 2, y);
				cout << "  ";
				gm.gotoxy(x - 2, --y);
				cout << "> ";
			}
			break;
		case DOWN:
			if (y < 11)
			{
				gm.gotoxy(x - 2, y);
				cout << "  ";
				gm.gotoxy(x - 2, ++y);
				cout << "> ";
			}
			break;
		case SUBMIT:
			return y - 9;
		}
	}
}

void Menu::helpDraw()
{
	system("cls");
	gm.gotoxy(10, 3);
	cout << "[ �� �� ] : W A S D";
	gm.gotoxy(5, 6);
	cout << "����� ������ �������� ���� Ŀ���� �����⸦ ������ �۾����ϴ�.";
	gm.gotoxy(5, 8);
	cout << "����� �ϳ��� ������ ���� ���� ������ �ݴ� �������δ� �� �� �����ϴ�.";
	gm.gotoxy(5, 15);
	cout << "�޴��� ���ư����� �����̽��ٸ� �����ּ���.";

	while (1)
		if (gm.keyControl() == SUBMIT)
			break;
}
