#include <stdio.h>
#include <malloc.h>



void main()
{
#pragma region ���� �Ҵ�
	// ���α׷��� ���� �߿� �ʿ��� ��ŭ �޸𸮸� �Ҵ��ϴ� �۾�. 

	// ���� �Ҵ��� ����ð��� ��������� �޸��� ũ�⸦ �����ų �� ������ �������� �޸��� ũŰ�� 
	//�Ҵ��� �� ����Ʈ ������ �����Ѵ�. 

	//int* ptr = (int*)malloc(sizeof(int));


	//�޸� ���� �Ҵ��� �� �ּҸ� ���� �����ͷ� ��ȯ�ϱ� ������ �������� ��ȯ�� ���� �޸𸮿� 
	//�Ҵ��ؾ� �Ѵ�. 
	//*ptr = 1000;

	//printf("���� �޸� �ȿ� �ִ� �� : %d\n", *ptr);



#pragma endregion

#pragma region ASCII �ڵ�
	// ���� ���ĺ��� ����ϴ� ��ǥ���� ���� ���ڵ��Դϴ�. 

	//char alphabet = 65;
	//
	//printf("ASCII �ڵ� ���� ��: %d\n", alphabet);
	//printf("ASCII �ڵ� ���� ��: %c\n", alphabet);
	//
	//// ���� ���ĺ� a~z���� ���
	//
	//for (int i = 97; i <= 122; i++)
	//{
	//	printf("%c\n",i);
	//}

#pragma endregion

#pragma region ���������
//�̹� ������ �޸� ������ ����Ű�� �������Դϴ�.
	//
	//int* intptr = malloc(sizeof(int));
	//
	//*intptr = 300;
	//
	//printf("intptr�� ����Ű�� ��: %d\n", *intptr);
	//
	//free(intptr);
	//
	//printf("������ intptr�� ����Ű�� ��: %d\n", *intptr);
	//
	//intptr = NULL;
	//
	//*intptr = 100;
	//
#pragma endregion

#pragma region ���� ������
	//int a = 100;
	//int* aptr = &a;
	//int** daptr = &aptr;
	//
	//int b = 200;
	//int* bptr = &b;
	//int** dbptr = &bptr;
	//
	//int temp = 0;
	//
	// temp = **daptr;
	// **dbptr = **daptr
	//
	//printf("a : %d b : %d\n", )
#pragma endregion




}#pragma once
