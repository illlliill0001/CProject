#include <stdio.h> // �⺻ ����� �������

void main()
{
#pragma region ��� ���� ������
	// ������ ������ ����� �����Ͽ�, ������ ������ ����Ű�� �ִ� �ּҿ� 
	// �����ϴ� ���� ������ �� ������ �ϴ� ��.

	//int data = 100;
	//int data1 = 20;
	//
	//const int* ptr = &data;
	//
	////*ptr = 300; (������ ���� �������� ���ȭ�� �Ǿ��� ������ ���� �߻�.)
	//
	//ptr = &data1;
	//
	//printf("ptr ������ ��: %p\n", ptr);
#pragma endregion

#pragma region ������ ���
	// ����� ������ �������̹Ƿ�, �ش� ������ ���� ������ �� ������,
	// �ٸ� ������ �ּ� ���� ����ų �� �ֽ��ϴ�. 
	//
	//int value1 = 30;
	//int value2 = 60;
	//
	//int * const ptr1 = &value1;
	//
	//printf("value1�� �� : %d\n", value1);
	//
	//*ptr1 = 99999; // (OK)
	//
	//// ptr1 =&value2; (Error)
	//
	//
	//printf("value1�� �� : %d\n", value2);

#pragma endregion

#pragma region siezeof(�ڷ���)
	//
	//float health = 66.5f;
	//short* pointer = NULL;
	//
	//printf("char�� ũ�� : %d\n", sizeof(char));
	//printf("short�� ũ�� : %d\n", sizeof(short));
	//printf("int�� ũ�� : %d\n", sizeof(int));
	//printf("long�� ũ�� : %d\n", sizeof(long));
	//
	//printf("float�� ũ�� : %d\n", sizeof(float));
	//printf("double�� ũ�� : %d\n", sizeof(double));
	//printf("long double�� ũ�� : %d\n", sizeof(long double));
	//
	//printf("pointer�� ũ�� : %d\n", sizeof(pointer));
	//
#pragma endregion

#pragma region ������

	//for (int i = 1; i <= 9; i++)
	//{
	//	for (int j = 1; j <= 9; j++)
	//	{
	//		printf("%d * %d = %d\n", i, j, i * j);
	//	}
	//	printf("\n");
	//
	//}
	//

#pragma endregion

#pragma region Scanf(�Է� �Լ�)
	// ǥ�� �Է� �Լ���, ���������� �����͸� �پ��� ���Ŀ� ���߾� �Է����ִ� �Լ��Դϴ�. 

	// scanf <- SDL �˻� ������ ���ϰ� ����ϰ� �Ǹ� ERROR �߻�. 

	// scanf_s("�Է��� ������ ����", &����)

	//int count = 0;
	//
	//printf("count ������ ���� �Է����ּ���. ");
	//scanf_s("�Է�: %d", &count);
	//
	//// ǥ�� �Է� �Լ��� �Է��� ������ �������� ���� �۾����� �Ѿ �� ����.
	//printf("count ������ ��: %d", count);
	//

	//�� ���
	//����) ���� �Է��� ���� ���� ���� �������� �������ּ���.
	// EX) 5�Է�
	int num = 0;
	printf("��: ");
	scanf_s("%d", &num);

	for (int i = 1; i <= num; i++)
	{
		for (int j = 0; j < i; j++)
		{
			printf("��");
		}
		printf("\n");
	}

#pragma endregion


}