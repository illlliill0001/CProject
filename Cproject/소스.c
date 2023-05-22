#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
#include <Windows.h>

#define up 72
#define left 75
#define right 77
#define down 80

typedef struct player
{
	int x;
	int y;
	
};
// ¹Ì·Î ¸Ê µ¥ÀÌÅÍ
char maze[11][11];
// ¹Ì·Î ¸Ê »ý¼º
void createmaze()
{
	//0: ºó°ø°£("  "), 1:º®(¤±), 2:Å»Ãâ±¸(¡Ý) 

	strcpy(maze[0],  "1111111111");
	strcpy(maze[1],  "1000011111");
	strcpy(maze[2],  "1011011111");
	strcpy(maze[3],  "1111011111");
	strcpy(maze[4],  "1110000111");
	strcpy(maze[5],  "1110110111");
	strcpy(maze[6],  "1110110111");
	strcpy(maze[7],  "1100110011");
	strcpy(maze[8],  "1110110111");
	strcpy(maze[9],  "1100110002");
	strcpy(maze[10], "1111111111");
}

void renderer()
{
	for (int i = 0; i < 11; i++)
	{
		for (int j = 0; j < 11; j++)
		{
			printf("%c", maze[i][j]);
		}
	}


}

int main()
{
	

	return 0;
}