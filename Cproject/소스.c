#include <stdio.h> // �⺻ ����� �������

void main()
{
#pragma region �����÷ο�
	// Ư���� �ڷ����� ǥ���� �� �ִ� �ִ��� ������ ����Ѿ ������ �����ϴ� �����Դϴ�. 

	// char 1 Byte(-128 ~ 127)
	// char data = 128;
	// printf("data�� ��: %d", data);

	//int <- 21
#pragma endregion

#pragma region ����÷ο�
	// Ư���� �ڷ����� ǥ���� �� �ִ� �ּڰ��� ������ �Ѿ ������ �����ϴ� �����Դϴ�.

	//char value = -129; // -128 ~ 127
	//printf("value�� �� : %d", value);

#pragma endregion

#pragma region ���迬����
	// �� ���� �ǿ������� ���� ���Ͽ� �� ����� 0 �Ǵ� 1�̶�� ������ ��Ÿ���� �������Դϴ�. 

	//int A = 10;
	//int B = 5; 
	//// A "<" B : B�� A���� Ŭ �� 
	//printf("A < B  %d\n", A < B);
	//// A ">" B : B�� A���� ���� ��
	// printf("A > B  %d\n", A > B);
	//// A "<=" B : B�� A���� ũ�ų� ���� �� 
	// printf("A <= B  %d\n", A <= B);
	//// A ">=" B : B�� A���� �۰ų� ���� �� 
	// printf("A >= B  %d\n", A >= B);
	//// A "==" B : A�� B�� ���� �� 
	// printf("A == B  %d\n", A == B);
	//// A "!=" B : A�� B�� ���� ���� �� 
	// printf("A != B  %d\n", A != B);

#pragma endregion

#pragma region ���ǹ�(if~ else if ~else)
	// if ��: � Ư���� ������ ���Ͽ� ������ �´ٸ� ����Ǵ� ��ɹ��Դϴ�.

	// ���࿡~ (����)
	//if (15 == 15)
	//{
	//	printf("15�� 15�� ����.\n");		// ������ "��"�̶�� { } ���ο� �ִ� ������ �����Ѵ�,
	//}
	
	// else if �� : if���� ������ Ʋ���� else if���� ������ �´ٸ� ����Ǵ� ��ɹ��Դϴ�. 

	//if (5 < 1)
	//{
	//	printf("if�� ����");
	//}
	//else if (5 == 5)
	//{
	//	// else if() ���� �� ������ �� �ֽ��ϴ�. 
	//..	printf("else if�� ����"); 
	//}
	
	// else ��: if���� else if���� ������ �� Ʋ���� ����Ǵ� ��ɹ��Դϴ�. 
	//if ('A' == 'B')
	//{
	//	printf("if ��");
	//}
	//else if ('C' == 'D')
	//{
	//	printf("else if ��");
	//}
	//else
	//{
	//	printf("else ��");
	//}
#pragma endregion


#pragma region �������� 
//// && (AND) 
//if ('A' == 'A' && 'A' == 'A')
//{
//	printf("AND�� ������ �����մϴ�\n");
//}
//// || (OR)
//if ('A' == 'A' || 'A' == 'B')
//{
//	printf("OR�� ������ �����մϴ�\n");
//}
//// ! (NOT)
//if (!'A')
//{
//	printf("NOT�� ������ �����մϴ�\n");
//}

#pragma endregion

#pragma region ��и�
	int x = -4; 
	int y = 0; 

	if(x > 0 && y > 0 )
	{
		printf("�� 1 ��и�");
	}
	else if (x < 0 && y > 0)
	{
		printf("�� 2 ��и�");
	}
	else if (x < 0 && y < 0)
	{
		printf("�� 3 ��и�");
	}
	else if (x > 0 && y < 0)
	{
		printf("�� 4 ��и�");
	}
	else if (x && y == 0)
	{
		printf("X ����");
	}
	else if (x == 0 && y)
	{
		printf("Y ����");
	}
	else
	{
		printf("����");
	}
#pragma endregion



}