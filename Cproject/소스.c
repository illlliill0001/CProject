#include <stdio.h>
#include <strig.h>

void function()
{
	printf("function() �Լ�\n");

}

void datalist()
{
	printf("datalist() �Լ�\n");
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
#pragma region �Լ� ������
	// �Լ��� �ּڰ��� �����ϰ� ����ų �� �ִ� ���� �Դϴ�.

	printf("function*()�� �ּڰ�: %p\n", function);

	void(*fPtr) ();
	int(*intfPtr) (int);

	fPtr = function;
	intfPtr = damage;

	fPtr();

	printf("intfPtr�� �� : %d\n", intfPtr(10));
	// �Լ������ʹ� �Լ��� ��ȯ���� �Ű������� Ÿ���� ��ġ�ؾ� �ϹǷ�, �Լ������͸� ����ϸ�
	// �������� �޸𸮸� �Ҵ��� �� ����. 
	// fPtr() = damage; ������

	fPtr = datalist;
	fPtr();

#pragma endregion
#pragma region typedef
   //
	//UINT count = 100;
	//unsigned int value = 9999;
	//
	//printf("count�� �� : %d", count);
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