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
#pragma region ����ü ������

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

#pragma region �� �� ������ �Ÿ� 
	// ������(sqrt)
	//printf("��Ʈ 49: %lf\n", sqrt(49));

	//�ŵ�������
	//printf("2�� 3�� : %lf\n", pow(2, 3));

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
	//printf("ĳ���Ϳ� ������ �Ÿ� : %f", distance);
	//
	//if (distance >= 5)
	//{
	//	printf("������ ���°� �ƴմϴ�\n");
	//}
	//
	//printf("��������");

#pragma region �Ǽ��� �����ϴ� ��� 

	// �ε� �Ҽ��� : �Ҽ����� ��ġ�� �������� �ʰ� �Ҽ����� ��ġ�� ��Ÿ���� ����Դϴ�. 
	//
	//float fdata = 1.3f;
	//printf("fdata�� ��: %.15f\n", fdata);
	//
	//double dData = 1.3;
	//printf("dData�� ��: %.15lf\n", dData);
	//
	//if (fdata == 1.3)
	//{
	//	printf("fdata�� ���� 1.3f ���� ����.");
	//
	//}
	//else
	//{
	//	printf("fdata�� ���� 1.3f ���� ���� �ʴ�");
	//}
	//
#pragma endregion









#pragma endregion




	return 0;
}
#pragma once
