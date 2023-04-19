#pragma once
#include <stdio.h> // 기본 입출력 헤더파일

void main()
{
#pragma region 반복문(while)
	//// 특정 조건을 거짓이 될 때까지 계속해서 주어진 명령문을 실행하는 반복문. 
	///
	///int count = 5;
	///while (count) //
	///{
	///	printf("게임실행...\n");
	///	count--;
	///}
   ///
#pragma endregion


#pragma region continue문
	//해당 조건문만 실행하지 않고, 반복문은 이어서 실행하는 제어문

	//for (int i = 1; i <= 5; i++)
	//{
	//	if (i == 3)
	//	{
	//		continue;
	//	}
	//	printf("%d ", i);
	//}	
#pragma endregion

#pragma region 형 변환
	// 서로 다른 자료형을 가지고 있는 변수끼리 연산이 이루어질때 기존에
	// 지정했던 자료형을 변환하는 과정입니다. 

	// 암묵적 형 변환 
	// 서로 다른 자료형으로 연산이 이루어질 때 자료형의 크기가 큰 자료형으로
	// 변환되는 과정입니다.

	//int integer = 10;
	//float decimal = 2.5f;

	// double > float > int > short > char
	//result(12.5f)= 10(정수)+ 2.5(float실수)
	//float result = integer + decimal;
	//
	//printf("result 변수의 값 : %f", result);

	//명시적 형 변환 
	// 연산이 이루어지기 전에 사용자가 직접 자료횽을 변환하는 과정

	// float 메모리 [2.0f] = (float)5/2
	// 프로그래밍에서 정수와 정수끼리의 연산을 정수만 나오게 됩니다. 
	//
	//int a = 5;
	//int b = 2; 
	//
	//float result1 = (float)a / b;
	//
	//printf("result1의 값 : %f\n", result1);
	//
#pragma endregion

#pragma region 주소 연산자
	// 변수의 주소값을 변환하는 연산자

	//int data = 333;

	//%p : 데이터의 주소를 출력하는 서식 지정자 입니다. 
	//
	//printf("data 변수의 주소: %p\n", &data);

#pragma endregion
#pragma region 포인터
	//// 메모리의 주소값을 저장할 수 있는 변수 입니다. 
   //
	//int box = 100;
	//int box1 = 999;
   //
	////ptr [box의 주소] <- box의 주소
	//int* ptr = NULL;
   //
	//ptr = &box;
   //
	//// 포인터 변수도 자신의 메모리 공간을 가지고 있으며, 포인터 변수에 
	//// 변수의 주소를 저장하게 되면 해당 변수의 시작 주소를 가리키게 된다.
	//printf("ptr 변수의 값 : %p\n", ptr);
	//printf("ptr 변수의 주솟값 : %p\n", &ptr);
	//printf("box 변수의 주솟값 : %p\n", &box);
   //
	//printf("box 변수의 값 : %d\n", box);
   //
	//*ptr = 600;
	//
	//printf("box 변수의 값 : %d\n", box);
   //
	////ptr [box1의 주소] <- box1의 주소
	//ptr = &box1;

	//*ptr = -999;
   ///
	///printf("box 변수의 값 : %d\n", box);
	///printf("box1 변수의 값 : %d\n", box1);
   ///
	///double health = 10.5;
   ///
	/////int ptr1 4 byte의 메모리 공간을 읽는다. 
	/////int * ptr1 
	///int * ptr1 = &health;
	///printf("ptr1 변수의 값 : %p\n", ptr1);
   ///
	///// 포인터 변수를 저장하기 위해 저장할 변수의 자료형과 포인터 변수의 
	///// 자료형이 일치해야 한다.
	///*ptr1 = 66.75;
	///printf("ptr1 변수가 가리키는 값: %1f\n", * ptr1);
   ////




#pragma endregion

}