#include "Game.h"
#include "Unit.h"
#include<Windows.h>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	CUnit::HideCursor();
	system("color 79");
	CGame game;
	game.run();
	//system("pause");
	getchar();
	return 0;
}