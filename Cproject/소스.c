#include <stdio.h>

#pragma region �Լ�
//�ϳ��� ������ �۾��� �����ϱ� ���� ���������� ����� �ڵ��� ����. 

//void : ���� ��ȯ���� �ʴ� �ڷ���
void Attack()
{
	for (int i = 0; i < 5; i++)
	{
		printf("����\n");
	}
}

// ��ȯ�� : �Լ��� ����Ǿ��� �� ���� ��ȯ����
int Function()
{
	return 100;
}
// �Լ��� ��� �ڷ����� ��ȯ�ϴ� ���� ���°� ��ġ���� ������ ���ϴ� ���� ���� �� ����.
int processint()
{
	return 67.5f; 
}

#pragma endregion

#pragma region �Ű� ����
// �Լ��� ���ǿ��� ���޹��� �μ��� �Լ� ���η� �����ϱ� ���� ����ϴ� �����Դϴ�. 
void Calculator(int x)
{
	printf("�Ű� ���� x�� ��: %d\n", x);
}

int Add(int x, int y)
{
	return x + y;
}
#pragma endregion


// ���� ���� ���� (�Լ�)
void swap(int x, int y)
{
	int temp = 0;

	//printf("�ٲٱ� ���� x�� ��: %d. y�� ��: %d\n", x, y);
	temp = x;
	x = y; 
	y = temp;

	//printf("�ٲٱ� �� x�� ��: %d. y�� ��: %d\n", x, y);
}

// ������ ���� ���� (�Լ�)

void swaprefernce(int * x, int * y)
{
	int temp = 0; 

	temp = *x;
	*x = *y;
	*y = temp;

}

#pragma region  �Լ��� ȣ�� (�Ű����� X)
// �Լ��� ȣ�� 
	//Attack();

	//printf("Function()�� �� : %d\n", Function());
	//printf("processint()�� ��: %d\n", processint());

#pragma endregion

void main()
{
#pragma region �Լ��� ȣ��(�Ű� ���� O)

	//�μ�: �Լ��� ȣ��ɶ� �Ű������� ���޵Ǵ� ��.


		//Calculator(100);
		//
		//printf("Add() �Լ��� �� : %d\n", Add(10, 20));
		//


	#pragma endregion
#pragma region ���� ���� ���� & ������ ���� ����

	int a = 100;
	int b = 200;
	

	// ���� ) a ������ b ������ ���� �ٲ��ּ���.

	// call by value
	swap(a, b);

	printf("a������ ��: %d\n", a);
	printf("b������ ��: %d\n", b);

	//call by reference
	// �Լ��� ȣ���� �� ������ �ּҸ� �μ��� �����ϰ� �Ǹ� ������ ������ �ּҰ� �����Ǿ� �μ��� ������ 
	// ���� 
	swaprefernce(&a, &b);

	printf("a������ ��: %d\n", a);
	printf("b������ ��: %d\n", b);

	

	
		

#pragma endregion

}