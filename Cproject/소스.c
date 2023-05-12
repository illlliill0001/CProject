#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h> 

int main()
{
#pragma region rand() 함수 
	//
	//srand(time(NULL));
	//int value = 0;
	//
	//for (int i = 0; i < 1; i++)
	//{
	//	value = rand() % 50;
	//	printf("value의 값: %d\n", value);
	//}
	//
	//
	//

#pragma endregion

#pragma region up down 게임
	//
	//srand(time(NULL));
	//int value = rand() % 50 + 1;
	//
	//int answer = 0;
	//int coin = 5;
	//while (coin)
	//{
	//	printf("남은 코인 %d\n", coin--);
	//	printf("숫자를 입력해: ");
	//	scanf_s("%d", &answer);
	//
	//	if (answer > value)
	//	{
	//		printf("down \n");
	//	}
	//	else if (answer < value)
	//	{
	//		printf("up \n");
	//	}
	//	else if (answer == value)
	//	{
	//		printf("게임에서 승리하였습니다 \n");
	//		break;
	//	}
	//	else
	//	{
	//		printf("1~50까지의 숫자를 입력하라\n");
	//		break;
	//	}
	//	if (coin == 0)
	//	{
	//		printf("게임에서 패배했습니다.\n");
	//		break;
	//	}
	//
	//		
	//}
	//
	//
#pragma endregion

#pragma region 정수의 승격
	// char 자료형과 short 자료형이 연산이 이루어질 때 cpu가 처리하기에 가장 적합한 
	// 크기의 정수 자료형 int로 형변환하는 과정

	char data1 = 5;
	short data2 = 10;

	printf("data1과 data2를 연산한 크기 : %d", sizeof(data1 + data2)); 




#pragma endregion


	return 0;
}