#pragma once
#include <stdio.h> // �⺻ ����� �������

void main()
{
#pragma region �ݺ���(while)
	//// Ư�� ������ ������ �� ������ ����ؼ� �־��� ��ɹ��� �����ϴ� �ݺ���. 
	///
	///int count = 5;
	///while (count) //
	///{
	///	printf("���ӽ���...\n");
	///	count--;
	///}
   ///
#pragma endregion


#pragma region continue��
	//�ش� ���ǹ��� �������� �ʰ�, �ݺ����� �̾ �����ϴ� ���

	//for (int i = 1; i <= 5; i++)
	//{
	//	if (i == 3)
	//	{
	//		continue;
	//	}
	//	printf("%d ", i);
	//}	
#pragma endregion

#pragma region �� ��ȯ
	// ���� �ٸ� �ڷ����� ������ �ִ� �������� ������ �̷������ ������
	// �����ߴ� �ڷ����� ��ȯ�ϴ� �����Դϴ�. 

	// �Ϲ��� �� ��ȯ 
	// ���� �ٸ� �ڷ������� ������ �̷���� �� �ڷ����� ũ�Ⱑ ū �ڷ�������
	// ��ȯ�Ǵ� �����Դϴ�.

	//int integer = 10;
	//float decimal = 2.5f;

	// double > float > int > short > char
	//result(12.5f)= 10(����)+ 2.5(float�Ǽ�)
	//float result = integer + decimal;
	//
	//printf("result ������ �� : %f", result);

	//����� �� ��ȯ 
	// ������ �̷������ ���� ����ڰ� ���� �ڷ��O�� ��ȯ�ϴ� ����

	// float �޸� [2.0f] = (float)5/2
	// ���α׷��ֿ��� ������ ���������� ������ ������ ������ �˴ϴ�. 
	//
	//int a = 5;
	//int b = 2; 
	//
	//float result1 = (float)a / b;
	//
	//printf("result1�� �� : %f\n", result1);
	//
#pragma endregion

#pragma region �ּ� ������
	// ������ �ּҰ��� ��ȯ�ϴ� ������

	//int data = 333;

	//%p : �������� �ּҸ� ����ϴ� ���� ������ �Դϴ�. 
	//
	//printf("data ������ �ּ�: %p\n", &data);

#pragma endregion
#pragma region ������
	//// �޸��� �ּҰ��� ������ �� �ִ� ���� �Դϴ�. 
   //
	//int box = 100;
	//int box1 = 999;
   //
	////ptr [box�� �ּ�] <- box�� �ּ�
	//int* ptr = NULL;
   //
	//ptr = &box;
   //
	//// ������ ������ �ڽ��� �޸� ������ ������ ������, ������ ������ 
	//// ������ �ּҸ� �����ϰ� �Ǹ� �ش� ������ ���� �ּҸ� ����Ű�� �ȴ�.
	//printf("ptr ������ �� : %p\n", ptr);
	//printf("ptr ������ �ּڰ� : %p\n", &ptr);
	//printf("box ������ �ּڰ� : %p\n", &box);
   //
	//printf("box ������ �� : %d\n", box);
   //
	//*ptr = 600;
	//
	//printf("box ������ �� : %d\n", box);
   //
	////ptr [box1�� �ּ�] <- box1�� �ּ�
	//ptr = &box1;

	//*ptr = -999;
   ///
	///printf("box ������ �� : %d\n", box);
	///printf("box1 ������ �� : %d\n", box1);
   ///
	///double health = 10.5;
   ///
	/////int ptr1 4 byte�� �޸� ������ �д´�. 
	/////int * ptr1 
	///int * ptr1 = &health;
	///printf("ptr1 ������ �� : %p\n", ptr1);
   ///
	///// ������ ������ �����ϱ� ���� ������ ������ �ڷ����� ������ ������ 
	///// �ڷ����� ��ġ�ؾ� �Ѵ�.
	///*ptr1 = 66.75;
	///printf("ptr1 ������ ����Ű�� ��: %1f\n", * ptr1);
   ////




#pragma endregion

}