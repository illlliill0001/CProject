#include <stdio.h>
#include <malloc.h>



void main()
{
#pragma region 동적 할당
	// 프로그램을 싱해 중에 필요한 만큼 메모리를 할당하는 작업. 

	// 동적 할당은 실행시간에 가변저긍로 메모리의 크기를 변경시킬 수 있으며 동적으로 메모리의 크키를 
	//할당할 때 바이트 단위로 지정한다. 

	//int* ptr = (int*)malloc(sizeof(int));


	//메모리 동적 할당할 때 주소를 범용 포인터로 반환하기 때문에 지료형을 변환한 다음 메모리에 
	//할당해야 한다. 
	//*ptr = 1000;

	//printf("동적 메모리 안에 있는 값 : %d\n", *ptr);



#pragma endregion

#pragma region ASCII 코드
	// 영문 알파벳을 사용하는 대표적인 문자 인코딩입니다. 

	//char alphabet = 65;
	//
	//printf("ASCII 코드 정수 값: %d\n", alphabet);
	//printf("ASCII 코드 문자 값: %c\n", alphabet);
	//
	//// 문제 알파벳 a~z까지 출력
	//
	//for (int i = 97; i <= 122; i++)
	//{
	//	printf("%c\n",i);
	//}

#pragma endregion

#pragma region 허상포인터
//이미 해제된 메모리 영역을 가리키는 포인터입니다.
	//
	//int* intptr = malloc(sizeof(int));
	//
	//*intptr = 300;
	//
	//printf("intptr이 가리키는 값: %d\n", *intptr);
	//
	//free(intptr);
	//
	//printf("해제된 intptr이 가리키는 값: %d\n", *intptr);
	//
	//intptr = NULL;
	//
	//*intptr = 100;
	//
#pragma endregion

#pragma region 이중 포인터
	//int a = 100;
	//int* aptr = &a;
	//int** daptr = &aptr;
	//
	//int b = 200;
	//int* bptr = &b;
	//int** dbptr = &bptr;
	//
	//int temp = 0;
	//
	// temp = **daptr;
	// **dbptr = **daptr
	//
	//printf("a : %d b : %d\n", )
#pragma endregion




}#pragma once
