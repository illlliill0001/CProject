#pragma once
#include <stdio.h>


void main()
{
#pragma region 포인터배열

	//const char* string[3];

	// 8byte 8byte 8byte
	// []     []     [] 

	//string[0] = "First";
	//string[1] = "Second";
	//string[2] = "Third";
	//
	//for (int i = 0; i < 3; i++)
	//{
	//	printf("string[%d]의 값 : %s\n", i, string[i]);
	//}



	//int a = 10;
	//int b = 20;
	//int c = 30;
	//
	//int* ptr1 = &a;
	//int* ptr2 = &b;
	//int* ptr3 = &c;
	//
	//int* arrayPtr[] = { ptr1, ptr2, ptr3 };
	//
	//printf("arrayPtr[0]의 값: %p\n", arrayPtr[0]);
	//printf("arrayPtr[0]가 가리키는 값: %d\n", *arrayPtr[0]);

#pragma endregion

#pragma region unsigned 부호없는 자료형
	// 부호가 없는 자료형으로 부호 비트가 없고 자료를 저장할 수 있는 데이터 영역이 2배로 늘어나는 자료형 

	//char data = 128;
	//
	//unsigned char uData = 255;
	//
	//printf("data의 값 : %d\n", data);
	//printf("data의 값 : %u\n", data);
	//
	//printf("uData의 값 : %d\n", uData);
	//printf("uData의 값 : %u\n", uData);

	//int x = 0;
	//int y = 0;

	//for (int i = 1; i <= x && i <= y; i++)
	//{
	//	if (x % y == 0 && y % i == 0)
	//	{
	//		printf("%d", i);
	//	}
	//}
   //
#pragma endregion

}