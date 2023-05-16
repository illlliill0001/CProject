#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
#include <Windows.h>

#define up 72
#define left 75
#define right 77
#define down 80

void gotoXY(int x, int y)
{
	COORD position = { x,y };

	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), position);
}



int main()
{
#pragma region 좌표이동함수 
	//
    //int x = 0; 
    //int y = 0;
    //int key = 0;
    //
    //while (1) 
    //{
    //    gotoxy(x, y);
    //    printf("★");
    //    if (_kbhit())
    //    {
    //        key = _getch();
    //    }
    //
    //    if (GetAsyncKeyState(VK_LEFT) & 0x8000) { 
    //        x--;
    //    }
    //    if (GetAsyncKeyState(VK_RIGHT) & 0x8000) { //오른쪽
    //        x++;
    //    }
    //    if (GetAsyncKeyState(VK_UP) & 0x8000) { //위
    //        y--;
    //    }
    //    if (GetAsyncKeyState(VK_DOWN) & 0x8000) { //아래
    //        y++;
    //    }
    //    
    //    
    //}
    //

#pragma endregion

#pragma region 문자열 길이 함수(strlen) 
    // 문자열의 크기를 반환하는 함수입니다.

   ////가장 마지막에 NULL 문자를 포함하지 않고 문자열의 크기를 계산합니다. 
   //char* string = "visual";
   //
   //int size = strlen(string);
   //
   //printf("size의 값 : %d", size);
#pragma endregion

#pragma region 회문
   // int flag = 1;
   //
   // char * data = "LEVEL";
   //
   // for (int i = 0; i < strlen(data) / 2; i++)
   // {
   //     if (data[i] != data[strlen(data) - 1 - i])
   //     {
   //         flag = 0;
   //         break;
   //     }
   //
   // }
   //
   // if (flag == 1)
   // {
   //     printf("회문\n");
   // }
   // else
   // {
   //     printf("회문이 아닙니다\n");
   // }
   //
#pragma endregion

	return 0;

}