#include <stdio.h>

// enum ����
enum color
{
	black,
	red = 13


};

enum state
{
	idle,
	attack,
	die

};

void main()
{
#pragma region ������ �迭
	// �迭�� ��ҷ� �� �ٸ� �迭�� ������ �迭

	// 2���� �迭�� ��� ���� ���еǸ� �տ� �ִ� �迭�� ���� �ǹ��ϰ� �ڿ� �ִ� �迭�� ���� �ǹ��Ѵ�.
	//int array2D[4][3] =
	//{
	//	{10,20,30},
	//	{40,50,60},
	//	{70,80,90},
	//	{100,110,120}
	//
	//};
	//
	//printf("array2D�� �ּ� : %p\n", array2D);
	//printf("array2D[0][0]�� �ּ� : %p\n", &array2D[0][0]);
	//
	////�迭 ������ 
	//// Ư�� �������� �迭�� ����ų�� �ִ� �ϳ��� ������
	//int* ptr = NULL;
	//ptr = array2D;
	//
	//ptr = ptr + 1; 
	//
	//printf("ptr�� ����Ű�� �� : %d", *ptr);



#pragma endregion

#pragma region ������(enum)
	// ���, ����� �Ҹ��� 

	//enum color color;
	//
	//color = black;
	//
	//printf("color�� ��: %d\n", color);
	//
	//color = red;
	//
	//printf

	int select = 0;
	int state = 0;

	printf("�÷��̾��� ���¸� �������ּ���: ");
	scanf_s("%d", &select);


	state = select;

	switch (state)
	{
	case 0: printf("������");
		break;
	case 1: printf("���ݻ���");
		break;
	case 2: printf("��������");
		break;
	}


#pragma endregion
	return 0;
}