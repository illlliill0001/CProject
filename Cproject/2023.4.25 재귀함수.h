#pragma once
include "sound.h"
#pragma region ��� �Լ� 
// � �Լ����� �ڽ��� ȣ���Ͽ� �۾��� �����ϴ� �Լ�

void Recursion()
{
	printf("Recursion() �Լ� ȣ��\n");
	Recursion();
}

#pragma endregion

#pragma region ���丮��
// !5 -> 120 ���

int Factorial(int x)
{
	// Ư���� ������ �Ǿ����� return �� 
	if (x == 1)
	{
		return 1;
	}
	// Ư���� ������ �ƴ϶�� ��� �Լ� ���� 
	else
	{
		return x * Factorial(x - 1);
	}
}


#pragma endregion

#pragma region �ζ��� �Լ�
//�Լ��� ȣ���ϴ� ��� �Լ��� ȣ��Ǵ� ��ġ���� �Լ��� �ڵ带 �����Ͽ� ����,

inline void Function()
{
	// �ζ��� �Լ��� �Լ��� ȣ���ϴ� ������ �����Ƿ� ó���ӵ��� ��������, �ζ��� �Լ��� ���� ����ϰ� �Ǹ� 
	// �Լ��� �ڵ尡 ����Ǳ� ������ ���� ������ Ŀ���� �ȴ�.
	printf("Function() ȣ��\n");

}
#pragma endregion

void main()
{
	//����Լ�
	//Recursion(3);

	//���丮��
	//printf("Factorial�� �� : %d\n", Factrial(3));
#pragma region �ݺ���(do~while)
// ���ǰ� ������� �ѹ��� �۾��� ������ ���� ���ǿ� ���� ��ɹ��� �����ϰ� �ݺ���
	//int count = 3;
	//
	//do
	//{
	//	printf("�α��� �õ�\n");
	//	count--;
	//} while (count > 0);

	sound();

#pragma endregion
