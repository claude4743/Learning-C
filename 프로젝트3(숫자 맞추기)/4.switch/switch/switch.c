#include <stdio.h>
#include <time.h>
int main(void)
{
	/*
	//����:0 ����:1 ��:2
	srand(time(NULL));
	int i = rand() % 3;//0~2��ȯ
	if (i == 0)
	{
		printf("����\n");
	}
	else if (i == 1)
	{
		printf("����\n");
	}
	else if (i == 2)
	{
		printf("��\n");
	}
	else
	{
		printf("�����\n");
	}
	*/

	/*
	//����:0 ����:1 ��:2
	srand(time(NULL));
	int i = rand() % 3;//0~2��ȯ
	switch (i)
	{
	case 0:printf("����\n"); break;
	case 1:printf("����\n"); break;
	case 2:printf("��\n"); break;
	
	default:printf("�����\n"); break;
	}
	*/

	int age = 9;
	switch (age)
	{

	case 8:
	case 9:
	case 10:
	case 11:
	case 12:
	case 13:printf("�ʵ��л��Դϴ�.\n"); break;
	case 14:
	case 15:
	case 16:printf("���л��Դϴ�.\n"); break;
	case 17:
	case 18:
	case 19:
	case 20:printf("����л��Դϴ�.\n"); break;
	default:printf("�л��� �ƴѰ�����.\n"); break;
	
	}


	return 0;
}