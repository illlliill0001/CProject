#pragma once
#include <stdio.h>
#include <conio.h>
#include <Windows.h>
#include <stdlib.h>



void ReadTextFile(const char* filename)
{

	FILE* readPtr = fopen(filename, "r"); // ←

	char buffer[100000] = { 0, };

	fread(buffer, 1, 100000, readPtr); // 파일 전체 읽기
	printf("%s", buffer);

	fclose(readPtr);

}

void Typing(unsigned int speed, const char * content)
{
	int i = 0;
	while (content[i] != '\0')
	{
		printf("%c", content[i++]);

	}


}
