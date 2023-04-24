#include <stdio.h>

#pragma region 함수
//하나의 목적의 작업을 수행하기 위해 독립적으로 설계된 코드의 집합. 

//void : 값을 반환하지 않는 자료형
void Attack()
{
	for (int i = 0; i < 5; i++)
	{
		printf("공격\n");
	}
}

// 반환형 : 함수가 종료되었을 때 값을 반환해줌
int Function()
{
	return 100;
}
// 함수의 경우 자료형과 반환하는 값을 형태가 일치하지 않으면 원하는 값을 얻을 수 없다.
int processint()
{
	return 67.5f; 
}

#pragma endregion

#pragma region 매개 변수
// 함수의 정의에서 전달받은 인수를 함수 내부로 전달하기 위해 사용하는 변수입니다. 
void Calculator(int x)
{
	printf("매개 변수 x의 값: %d\n", x);
}

int Add(int x, int y)
{
	return x + y;
}
#pragma endregion


// 값에 의한 전달 (함수)
void swap(int x, int y)
{
	int temp = 0;

	//printf("바꾸기 전의 x의 값: %d. y의 값: %d\n", x, y);
	temp = x;
	x = y; 
	y = temp;

	//printf("바꾸기 후 x의 값: %d. y의 값: %d\n", x, y);
}

// 참조에 의한 전달 (함수)

void swaprefernce(int * x, int * y)
{
	int temp = 0; 

	temp = *x;
	*x = *y;
	*y = temp;

}

#pragma region  함수의 호출 (매개변수 X)
// 함수의 호출 
	//Attack();

	//printf("Function()의 값 : %d\n", Function());
	//printf("processint()의 값: %d\n", processint());

#pragma endregion

void main()
{
#pragma region 함수의 호출(매개 변수 O)

	//인수: 함수가 호출될때 매개변수에 전달되는 값.


		//Calculator(100);
		//
		//printf("Add() 함수의 값 : %d\n", Add(10, 20));
		//


	#pragma endregion
#pragma region 값에 의한 전달 & 참조에 의한 전달

	int a = 100;
	int b = 200;
	

	// 문제 ) a 변수와 b 변수의 값을 바꿔주세요.

	// call by value
	swap(a, b);

	printf("a변수와 값: %d\n", a);
	printf("b변수와 값: %d\n", b);

	//call by reference
	// 함수를 호출할 때 변수의 주소를 인수로 전달하게 되면 전달한 변수의 주소가 참조되어 인수로 전달한 
	// 값이 
	swaprefernce(&a, &b);

	printf("a변수와 값: %d\n", a);
	printf("b변수와 값: %d\n", b);

	

	
		

#pragma endregion

}