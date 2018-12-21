// Worm-Game.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include "pch.h"
#include "Menu.h"
#include "Map.h"

using namespace std;


int main()
{
	Menu menu;
	menu.init();
	while (1)
	{
		int menuCode = menu.menuDraw();
		
		if (menuCode == 0)
		{
			Map map;
			map.init();
		}
		else if (menuCode == 1)
		{
			menu.helpDraw();
		}
		else if (menuCode == 2)
			return 0;
		system("cls");
	}

	return 0;
}