#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
#include <Windows.h>
#include <stdlib.h>

#define up 72
#define left 75
#define right 77
#define down 80

typedef struct Enemy
{
	int x;
	int y;

	const char* shape
}Enemy;

typedef struct Player
{
	int x, y;

	const char* shape
	
} Player;


void gotoxy(int x, int y)
{
	COORD pos = { x, y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

void keyboard(Player * ptrplayer)
{

	char key = 0;
	
	if (_kbhit())
	{
		key = _getch();
		
		if (key == -32)
		{
			key = _getch();
		}
	}
	switch (key)
	{
	case left: if (ptrplayer->x < 0) return;
		ptrplayer->x -= 2;
		break;
	case right: if (ptrplayer->x > 30) return;
		ptrplayer->x += 2;
		break;
	}
}

int randomX()
{
	srand(time(NULL));

		int random = rand() % 31;

		if (random % 2 == 1)
		{
			random += 1;
		}
		return random;
}

int main()
{
	system("mode con cols = 30 line = 25");
	Player player = { 10, 20 , "¡Ú" };
	Enemy enemy = { random(), 0 , "¢Â"};

	while (1)
	{
		keyboard(&player);

		gotoxy(enemy.x, enemy.y++);
		printf("%s", enemy.shape);

		gotoxy(player.x, player.y);
		printf("%s", player.shape);

		sleep(100);

		system("cls");


	}

	return 0;
}