#include "pch.h"
#include <iostream>
#include "Worm.h"
#include "Windows.h"
#include "stdlib.h"
#include <conio.h>

void PrintMap();
void keyControl();
int main()
{
	system("cls");
	//PrintMap();
    Worm worm;
	worm.Move();
	return 0;
}

static char Map[][31]=
	{
		"------------------------------",
		"|                            |",
		"|                            |",
		"|                            |",
		"|                            |",
		"|                            |",
		"|                            |",
		"|                            |",
		"|                            |",
		"|                            |",
		"|                            |",
		"------------------------------"
	};

void PrintMap()
{
	system("cls");
	for(int i =0; i < 15; ++i)
		printf("%s\n", Map[i]);
	
}

void keyControl()
{
	int key;
	
	while(1)
	{
		key = _getch();
		_putch(key);
		if (key == 'W' || key == 'w')
			printf("w 누름");
		else if (key == 'A' || key == 'a')
			printf("a 누름");
		else if (key == 'S' || key == 's')
			printf("s를 누름");
		else if (key == 'D' || key == 'd')
			printf("d를 누름");
	//	else if (key == "")
	//		printf("enter를 누름");
	}
}


