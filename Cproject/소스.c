#include <stdio.h>

#pragma region 전역 변수
// 함수 외부에서 선언된 변수로 프로그램 어디에서나 접근 가능하며, 프로그램이 종료되어야만 메모리에서
// 해제되는 변수입니다. 

int globalValue = 5; 

#pragma endregion

#pragma region 정적 변수
// 지역 변수와 젼역변수의 특징을 가지고 있으며 한번만 초기화가 이루어짐.

void Calculator()
{
	static int value = 1;

	value += 1;

	printf("value의 값 : %d\n", value);

}

#pragma endregion


void Function()
{
	int count = 0; 

	count += 1; 
	globalValue += 1;

	printf("count의 값 : %d\n", count);
	printf("globalValue의 값: %d\n", globalValue);
}

void main()
{
#pragma region 지역 변수
	// 불록 {} 내에서 선언된 변수로 불록 내에서만 유효하며, 불록이 종료되면 메모리에서 사라지는 변수

	// A지역
	int data = 100;
	
	// B 지역
	{
		int data = 20; 
		printf("B 지역 data의 값: %d\n", data);
	}

	printf("A 지역 data의 값 : %d\n", data);

#pragma endregion
	//
	//Function();
	//Function();
	//
	//Calculator();
	//Calculator();
	//
	//printf("정적 변수 attack의 값: %d", attack);
#pragma region 범용 포인터
	/// 자료형이 정해지지 않은 사앹로 모든 자료형을 저장할 수 있는 포인타
   
	//char chardata = 'x';
	//int intdata = 10;
	//float floatdata = 5.75f;
	//
	//void* ptr = NULL;
	/
		/
		//ptr = &chardata;
		////범용 포인터로 변수의 메모리에 접근하려면 범용포인터가 가리키는 자료형의 
		////형변환 해주어야 한다.
		//
		//*(char*)ptr = 'M';
		//printf("ptr이 가리키는 값: %c\n", *(char*)ptr);
		/
		//ptr = &intdata;
		//*(int*)ptr = 99;
		//printf("ptr이 가리키는 값: %c\n", *(int*)ptr);

#pragma endregion
#pragma region 약슈
	   // 내가 입력한 순사의 약수를 출력하시요
	   // 12 - 1,2,3,4,6,12
	//int number = 0;
	//	
	//scanf_s("%d", &number);
	//
	//for (int i = 1; i <= number; i++)
	//{
	//
	//}
#pragma endregion

#pragma region shortcircuit
//논리


#pragma endregion



}	