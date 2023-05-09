#include <stdio.h>
#include <math.h>

struct player
{
	int hp;
	float attack;
	int x;
	int y;
};

struct enemy
{
	int x;
	int y;

};

int main()
{
#pragma region 구조체 포인터

	//struct player player;
	//
	//struct player* ptrplayer = NULL;
	//
	//ptrplayer = &player;
	//
	//(*ptrplayer).hp = 100;
	//(*ptrplayer).attack = 12.5f;
	//
	//printf("%d\n",(*ptrplayer).hp);
	//printf("%f\n", (*ptrplayer).attack);
	//
	//ptrplayer->hp = 250;
	//ptrplayer->attack = 22.75f;
	//
	//printf("%d\n", ptrplayer->hp);
	//printf("%f\n", ptrplayer->attack);
	//




#pragma endregion

#pragma region 두 점 사이의 거리 
	// 제곱근(sqrt)
	//printf("루트 49: %lf\n", sqrt(49));

	//거듭제곱근
	//printf("2의 3승 : %lf\n", pow(2, 3));

	struct player player1;
	struct enemy enemy;

	//player1.x = 0;
	//player1.y = 0;
	//
	//enemy.x = 5;
	//enemy.y = 7;
	//
	//int xDistance = player1.x - enemy.x;
	//int yDistance = player1.y - enemy.y;
	//
	//float distance = sqrt(pow(xDistance, 2) + pow(yDistance, 2));
	//
	//printf("캐릭터와 몬스터의 거리 : %f", distance);
	//
	//if (distance >= 5)
	//{
	//	printf("위험한 상태가 아닙니다\n");
	//}
	//
	//printf("전투상태");

#pragma region 실수를 저장하는 방법 

	// 부동 소수점 : 소수점의 위치를 고정하지 않고 소수점의 위치를 나타내는 방법입니다. 
	//
	//float fdata = 1.3f;
	//printf("fdata의 값: %.15f\n", fdata);
	//
	//double dData = 1.3;
	//printf("dData의 값: %.15lf\n", dData);
	//
	//if (fdata == 1.3)
	//{
	//	printf("fdata의 값과 1.3f 값이 같다.");
	//
	//}
	//else
	//{
	//	printf("fdata의 값과 1.3f 값이 같지 않다");
	//}
	//
#pragma endregion









#pragma endregion




	return 0;
}
#pragma once
