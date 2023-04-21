#include <stdio.h> 
#include <limits.h>
// #include 파일 처리 전처리문 
// 시스템 파일이나 사용자 정의 파일을 프로그램 소스에 삽입하여 사용하기 위한 선언문.
#pragma region 메크로

	// 프로그램 내에서 특정한 데어터가 문자열로 정의 되고 처리되는 과정.
	// 매크로는 컴파일러가 아닌 선행처리기에 의해서 처리되는 문장이기 때문에 명령문 끝에 ";"을 사용하지 않는다. 


// 매크로는 메모리 공간 가지고 있지 않음.
#pragma endregion

// 전처리기란?
 // 프로그램이 컴파일되기 이전에 프로그램에 대한 사전처리 과정입니다. 
void main()
{
#pragma region 문자열
	//// 연속적인 메모리 공간에 저장된 문자배열 
	//// 문자열 -- 1. 포인터를 이용한 문자열 - 2. 배열을 이용한 문자열
	////  1. 포인터를 이용한 문자열 : char * name = "Kim";  ※ 2. 배열을 이용한 문자열 : char data[5] = {data};
	//
	//// 문자열의 경우 포인터를 이용하여 문자열 상수를 가리키도록 설정할 수 있습니다.  
	//const char* name = "James";
	//
	//// '%s' : 문자열을 출력하는 서식
	//printf("name 변수의 값 : %p\n", name);
	//printf("name 변수가 가리키는 값 : %s\n", name);
	//
	//// 문자열 상수는 데이터 영역의 읽기 전용 공간에 저장되기 때문에 문자열의 값을 변경할 수 없다. 
	//
	//name = "tom";
	//
	//// 문자열은 맨 마지막에 무효의 문자(NULL)가 자동으로 포함된다.
	//// NULL 문자의 역할은 문자열의 끝을 알려주는 것.
	//printf("name 변수의 값 : %p\n", name);
	//printf("name 변수가 가리키는 값 : %s\n", name); 
	
	//// 배열을 이용한 문자열 
	//char string [ ] = { "Game" };
	//
	////문자열은 공백도 함께 메모리 공간에 포함된다.
	//char string1[] = { "App l\0e"};
	//
	////문자 배열 사이에 무효의 문자를 넣게 되면 무효의 문자까지만 문자열을 출력합니다. 
	//
	//printf("string의 값 : %s\n", string);
	//printf("string1의 값 : %s\n", string1);
	//
	//string[1] = 'b';
	//string[3] = 'o';
	//
	//printf("string의 값 : %s\n", string);
	//
	// char 배열은 포인터 상수. 



#pragma endregion
	// 매크로
	//printf("매크로 SIZE의 값 : %d", SIZE);

#pragma region 최댓값과 최솟값
	// 배열 [5] = {10,5,6,99,1};
	int max = 0;
	int min = INT_MAX;
	// 최댓값 : 99 
#define ARRAYSIZE 5
	// 최솟값 : 1 

	int array[ARRAYSIZE] = { 10,5,6,99,1 };
	for(int i = 0; i < ARRAYSIZE; i++)
	{
		if (max < array[i])
		{
			max = array[i];
		}
		if (min > array[i])
		{
			min = array[i];
		}
	

	}
	
	printf("array의 최댓값: %d, array의 최솟값: %d", max, min);




#pragma endregion


}

