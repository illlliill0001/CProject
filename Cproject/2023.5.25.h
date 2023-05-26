#pragma once
#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
#include <Windows.h>
#include <stdlib.h>
#include "loadmameger.h"

#define up 72
#define down 80


void gotoxy(int x, int y)
{
	COORD pos = { x, y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

typedef struct select
{
	int x, y;
	const char* shape;

}select;

void keyboard(select * selectPtr)
{
	char key = 0;
	if (_kbhit())
	{
		key = _getch();

		if (key == -32)
		{
			key = _getch();
		}
		switch (key)
		{
		case up: selectPtr->y -= 5;
			break;
		case down: selectPtr->y += 5;
			break;
		}
		system("cls");
	}

}

void typing(unsigned int speed, const char* content)
{
	int i = 0;

	while (content[i] != '\0')
	{
		printf("%c", content[i++]);
		fflush(stdout);
		Sleep(speed);
	}
}

int main()
{
	typing(250, "hello~");

	int stage = 0;

	select select = { 15 , 29, "ขั" };

	while (1)
	{
		gotoxy(select.x, select.y);
		keyboard(&select);

		switch (stage)
		{
		case 0: ReadTextFile("resoure/DB.txt");
			break;
		case 1:  ReadTextFile("resoure/DB.txt");
			break;
		}
		gotoxy(select.x, select.y);
		printf("%s, select");


	}


}

