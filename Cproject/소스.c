#include <stdio.h>

#pragma region ���� ����
// �Լ� �ܺο��� ����� ������ ���α׷� ��𿡼��� ���� �����ϸ�, ���α׷��� ����Ǿ�߸� �޸𸮿���
// �����Ǵ� �����Դϴ�. 

int globalValue = 5; 

#pragma endregion

#pragma region ���� ����
// ���� ������ ���������� Ư¡�� ������ ������ �ѹ��� �ʱ�ȭ�� �̷����.

void Calculator()
{
	static int value = 1;

	value += 1;

	printf("value�� �� : %d\n", value);

}

#pragma endregion


void Function()
{
	int count = 0; 

	count += 1; 
	globalValue += 1;

	printf("count�� �� : %d\n", count);
	printf("globalValue�� ��: %d\n", globalValue);
}

void main()
{
#pragma region ���� ����
	// �ҷ� {} ������ ����� ������ �ҷ� �������� ��ȿ�ϸ�, �ҷ��� ����Ǹ� �޸𸮿��� ������� ����

	// A����
	int data = 100;
	
	// B ����
	{
		int data = 20; 
		printf("B ���� data�� ��: %d\n", data);
	}

	printf("A ���� data�� �� : %d\n", data);

#pragma endregion
	//
	//Function();
	//Function();
	//
	//Calculator();
	//Calculator();
	//
	//printf("���� ���� attack�� ��: %d", attack);
#pragma region ���� ������
	/// �ڷ����� �������� ���� ���� ��� �ڷ����� ������ �� �ִ� ����Ÿ
   
	//char chardata = 'x';
	//int intdata = 10;
	//float floatdata = 5.75f;
	//
	//void* ptr = NULL;
	/
		/
		//ptr = &chardata;
		////���� �����ͷ� ������ �޸𸮿� �����Ϸ��� ���������Ͱ� ����Ű�� �ڷ����� 
		////����ȯ ���־�� �Ѵ�.
		//
		//*(char*)ptr = 'M';
		//printf("ptr�� ����Ű�� ��: %c\n", *(char*)ptr);
		/
		//ptr = &intdata;
		//*(int*)ptr = 99;
		//printf("ptr�� ����Ű�� ��: %c\n", *(int*)ptr);

#pragma endregion
#pragma region �ུ
	   // ���� �Է��� ������ ����� ����Ͻÿ�
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
//��


#pragma endregion



}	