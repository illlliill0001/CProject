#include <stdio.h>
#include <strig.h>

void function()
{
	printf("function() 함수\n");

}

void datalist()
{
	printf("datalist() 함수\n");
}

int damage(int x)
{
	return 0; 
}

void sort(void (*fPtr)())
{
	fPtr();

}

#pragma region typedef

typedef unsigned int UINT;

struct Player
{
	int x;
	int y;
	char name[10];
}Player1;

#pragma endregion


int main()
{
#pragma region 함수 포인터
	// 함수의 주솟값을 저장하고 가리킬 수 있는 변수 입니다.

	printf("function*()의 주솟값: %p\n", function);

	void(*fPtr) ();
	int(*intfPtr) (int);

	fPtr = function;
	intfPtr = damage;

	fPtr();

	printf("intfPtr의 값 : %d\n", intfPtr(10));
	// 함수포인터는 함수의 봔환형과 매개변수의 타입이 일치해야 하므로, 함수포인터를 사용하며
	// 동적으로 메모리를 할당할 수 없다. 
	// fPtr() = damage; 오류남

	fPtr = datalist;
	fPtr();

#pragma endregion
#pragma region typedef
   //
	//UINT count = 100;
	//unsigned int value = 9999;
	//
	//printf("count의 값 : %d", count);
   //
	//Player1; player1;
	//player1.x = 10;
	//player1.y = 5;
	//player1.name = "Alistar";
   //
   //
#pragma endregion


	return 0;
}