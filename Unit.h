#pragma once

#include <Windows.h>
class CUnit
{
public:
	CUnit(int x = 0, int y = 0, char pic = '*');
	virtual ~CUnit();
	void show();
	void erase();
	static void gotoxy(int x, int y);

public:
	int m_iX;
	int m_iY;
	char m_cPic;

	static void HideCursor()
	{
		CONSOLE_CURSOR_INFO cursor;
		cursor.bVisible = FALSE;
		cursor.dwSize = sizeof(cursor);
		HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleCursorInfo(handle, &cursor);
	}
};

