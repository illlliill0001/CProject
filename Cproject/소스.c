#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>


int StringLenght(const char* string)
{
	int count = 0;

	for (int i = 0; string[i] < '\0'; i++)
	{
		count++;
	}

	return count++;
}

int main()
{
	int a = StringLenght("Video");
	
	int value = StringLenght("Iphone");
	printf("valueÀÇ °ª : %d\n", value);

	char content1[20] = { "Hello" };
	char content2[10] = { "Update" };


	return 0;
}
