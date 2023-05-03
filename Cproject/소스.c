#include <stdio.h>

// enum 선언
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
#pragma region 이차원 배열
	// 배열의 요소로 또 다른 배열을 가지는 배열

	// 2차원 배열은 행과 열로 구분되면 앞에 있는 배열은 행을 의미하고 뒤에 있는 배열은 열을 의미한다.
	//int array2D[4][3] =
	//{
	//	{10,20,30},
	//	{40,50,60},
	//	{70,80,90},
	//	{100,110,120}
	//
	//};
	//
	//printf("array2D의 주소 : %p\n", array2D);
	//printf("array2D[0][0]의 주소 : %p\n", &array2D[0][0]);
	//
	////배열 포인터 
	//// 특정 사이즈의 배열만 가리킬수 있는 하나의 포인터
	//int* ptr = NULL;
	//ptr = array2D;
	//
	//ptr = ptr + 1; 
	//
	//printf("ptr이 가리키는 값 : %d", *ptr);



#pragma endregion

#pragma region 열거형(enum)
	// 요소, 멤버라 불리는 

	//enum color color;
	//
	//color = black;
	//
	//printf("color의 값: %d\n", color);
	//
	//color = red;
	//
	//printf

	int select = 0;
	int state = 0;

	printf("플레이어의 상태를 설정해주세요: ");
	scanf_s("%d", &select);


	state = select;

	switch (state)
	{
	case 0: printf("대기상태");
		break;
	case 1: printf("공격상태");
		break;
	case 2: printf("죽음상태");
		break;
	}


#pragma endregion
	return 0;
}