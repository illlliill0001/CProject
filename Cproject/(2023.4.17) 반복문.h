#include <stdio.h> // �⺻ ����� �������

void main()
{
#pragma region switch��
	// switch��
	// � ����� ���� �� ������� ����Ǵ� ��ɹ��Դϴ�. 

	//int count = 1;

	//// switch���� ��� ���ǿ� �ش��ϴ� ���� ���� ������ ��ġ�� �̵��մϴ�.
	//switch (count) // <- ��
	//{
	//case 0: printf("����.\n");
	//	break;  //break��: Ư���� �������� �б⸦ Ż���ϴ� ���
	//case 1: printf("����.\n");
	//	break;
	//case 2: printf("����.\n");
	//	break;
	//default: printf("�������� ���� �߻��߽��ϴ�.\n");
	//	break;
	//}

#pragma endregion

#pragma region ���� ������
	// �ǿ����ڸ� �ϳ��� ������Ű�ų� ���ҽ�ų �� ����ϴ� ������.

	// ���� ���� ������ 
	//// ������ ���� ������Ų �Ŀ� ������ �����ϴ� ������. 
	//int a = 0;
	//int result1 = 0;
	//
	//// ����
	//result1 = ++a;
	//
	//printf("result1�� �� : %d\n", result1);
	//
	////����
	//result1 = --result1; 
	//
	//printf("result1�� �� : %d\n", result1);
	//// ���� ���� ������ 
	//// ������ ������ ���� ������ ���� ������Ű�� ������. 
	//int b = 0; 
	//int result2 = 0; 
	//
	//// ����
	//result2 = b++;
	//printf("result2�� �� : %d\n", result2);
	//
	////����
	//result2 = b--;
	//printf("result2�� �� : %d\n", result2);
	//

#pragma endregion

#pragma region �ݺ��� (for��)
	//�ʱ���� �����Ͽ� ���ǽ��� ����� ���� Ư���� Ƚ����ŭ �ݺ��ϴ� �ݺ���.
	//�ʱ�� : int i = 0;
	//���ǽ� : i < 5;
	//������ : i++
	//for (int i = 0; i < 10; i++)
	//{
	//	printf("������...\n");
	//}

	//�ݺ��� ����
	// �ݺ������� �ʱⰪ�� 1 ~ 5�� ���� ����մϴ�.

	//for (int i = 1; i <= 5; i++)
	//{
	//	//for���� ��� ������ ������ ���¿� �ݴ�� �ʱ���� �����ϰ� �Ǹ� 
	//	// ������ ��ġ���� �ʾ� ��� �ݺ������� ����Ǵ� ���� �߻�
	//printf("%d ", i);
	//}

	// �ݺ�����
	// 1~10������ ���� ���ض�
	//int data = 0;
	//for (int i = 1; i <= 10; i++)
	//{
	//	//���� ���� ������
	//	// Ex) ���� += A����; , Ex) ���� *= A����;
	//	// Ex) ���� -= A����; , Ex) ���� /= A����;
	//	data = data + i;
	//}
	//printf("data�� �� : %d", data);

	//// 2�� for��
	//for (int i = 0; i < 3; i++)
	//{
	//	for (int j = 0; j < 3; j++)
	//	{
	//		printf("���ʿ� �ִ� for��\n");
	//	}
	//	printf("�ٱ��� �ִ� for��\n");
	//}
#pragma endregion

}
