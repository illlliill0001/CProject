#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
#include <Windows.h>

// HANDLE �ε����� �����ؼ� ���۸� ��ü��Ű�� ���� 
int screenindex = 0;

//������ ũ��
int width = 100;
int height = 100;

HANDLE screen[2];

typedef struct player
{
	int x, y;
	const char* shape;
}player;

void screeninit()
{
	CONSOLE_CURSOR_INFO cursor;
	// ������ ���� ���� ������
	COORD size = { width, height };
	// left, top, right, bottom
	SMALL_RECT rect = { 0,0, width - 1, height - 1 };
	//ȭ�� 2���� �����մϴ� 
	screen[0] = CreateConsoleScreenBuffer
	(
		GENERIC_READ | GENERIC_WRITE,
		FILE_SHARE_READ | FILE_SHARE_WRITE,
		NULL,
		CONSOLE_TEXTMODE_BUFFER,
		NULL
	);
}


int main()
{
	player player = { 5, 5, "��" };

	screeninit();

	while (1)
	{
		screenprint(player.x, player.y, player.shape);

		//2. ���� ��ü
		screenflipping();

		//3. ��ü�� ������ ������ ����
		screenclear();

	}
	screenrelease();


	return 0;
}
#pragma once
