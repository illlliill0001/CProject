#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
#include <Windows.h>

// HANDLE 인덱스에 접근해서 버퍼를 교체시키는 변수 
int screenindex = 0;

//버퍼의 크기
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
	// 버퍼의 가로 세로 사이즈
	COORD size = { width, height };
	// left, top, right, bottom
	SMALL_RECT rect = { 0,0, width - 1, height - 1 };
	//화면 2개를 생성합니다 
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
	player player = { 5, 5, "☆" };

	screeninit();

	while (1)
	{
		screenprint(player.x, player.y, player.shape);

		//2. 버퍼 교체
		screenflipping();

		//3. 교체된 버퍼의 내용을 삭제
		screenclear();

	}
	screenrelease();


	return 0;
}
#pragma once
