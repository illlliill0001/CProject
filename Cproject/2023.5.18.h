#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
#include <Windows.h>

int main()
{
#pragma region ���� ����� 

	// ���� ����
	// fopen("������ �̸�.Ȯ����",���ϸ��)
	//  w : ����
	//  r : �б�
	//  a : append  
	// FILE* filePtr = fopen("DB.txt", "w");
	//
	// fputs("ID\n", filePtr);
	// fputs("Password\n", filePtr);
	//
	// ���� ������ �ݱ�
	// fclose(filePtr);

	int screen = 1;

	// screen = 1 FULL 
	// screen = 2 window 

	SetConsoleDisplayMode(GetStdHandle(STD_OUTPUT_HANDLE), CONSOLE_FULLSCREEN_MODE, 0);
	while (1)
	{


		FILE* readPtr = fopen("monster.txt", "r");

		char buffer[100000] = { 0, };

		fread(buffer, 1, 100000, readPtr);
		printf("%s", buffer);

		fclose(readPtr);

		syetem(cls);

		if (GetAsyncKeyState(VK_SPACE))
		{
			exit(0);
		}
	}



#pragma endregion




}