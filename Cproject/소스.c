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
#pragma region ��ǥ�̵��Լ� 
	//
    //int x = 0; 
    //int y = 0;
    //int key = 0;
    //
    //while (1) 
    //{
    //    gotoxy(x, y);
    //    printf("��");
    //    if (_kbhit())
    //    {
    //        key = _getch();
    //    }
    //
    //    if (GetAsyncKeyState(VK_LEFT) & 0x8000) { 
    //        x--;
    //    }
    //    if (GetAsyncKeyState(VK_RIGHT) & 0x8000) { //������
    //        x++;
    //    }
    //    if (GetAsyncKeyState(VK_UP) & 0x8000) { //��
    //        y--;
    //    }
    //    if (GetAsyncKeyState(VK_DOWN) & 0x8000) { //�Ʒ�
    //        y++;
    //    }
    //    
    //    
    //}
    //

#pragma endregion

#pragma region ���ڿ� ���� �Լ�(strlen) 
    // ���ڿ��� ũ�⸦ ��ȯ�ϴ� �Լ��Դϴ�.

   ////���� �������� NULL ���ڸ� �������� �ʰ� ���ڿ��� ũ�⸦ ����մϴ�. 
   //char* string = "visual";
   //
   //int size = strlen(string);
   //
   //printf("size�� �� : %d", size);
#pragma endregion

#pragma region ȸ��
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
   //     printf("ȸ��\n");
   // }
   // else
   // {
   //     printf("ȸ���� �ƴմϴ�\n");
   // }
   //
#pragma endregion

	return 0;

}