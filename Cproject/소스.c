#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h> 

int main()
{
#pragma region rand() �Լ� 
	//
	//srand(time(NULL));
	//int value = 0;
	//
	//for (int i = 0; i < 1; i++)
	//{
	//	value = rand() % 50;
	//	printf("value�� ��: %d\n", value);
	//}
	//
	//
	//

#pragma endregion

#pragma region up down ����
	//
	//srand(time(NULL));
	//int value = rand() % 50 + 1;
	//
	//int answer = 0;
	//int coin = 5;
	//while (coin)
	//{
	//	printf("���� ���� %d\n", coin--);
	//	printf("���ڸ� �Է���: ");
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
	//		printf("���ӿ��� �¸��Ͽ����ϴ� \n");
	//		break;
	//	}
	//	else
	//	{
	//		printf("1~50������ ���ڸ� �Է��϶�\n");
	//		break;
	//	}
	//	if (coin == 0)
	//	{
	//		printf("���ӿ��� �й��߽��ϴ�.\n");
	//		break;
	//	}
	//
	//		
	//}
	//
	//
#pragma endregion

#pragma region ������ �°�
	// char �ڷ����� short �ڷ����� ������ �̷���� �� cpu�� ó���ϱ⿡ ���� ������ 
	// ũ���� ���� �ڷ��� int�� ����ȯ�ϴ� ����

	char data1 = 5;
	short data2 = 10;

	printf("data1�� data2�� ������ ũ�� : %d", sizeof(data1 + data2)); 




#pragma endregion


	return 0;
}