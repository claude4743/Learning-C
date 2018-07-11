#include <stdio.h>
#include <time.h>
int main(void)
{
	/*
	//가위:0 바위:1 보:2
	srand(time(NULL));
	int i = rand() % 3;//0~2반환
	if (i == 0)
	{
		printf("가위\n");
	}
	else if (i == 1)
	{
		printf("바위\n");
	}
	else if (i == 2)
	{
		printf("보\n");
	}
	else
	{
		printf("몰라요\n");
	}
	*/

	/*
	//가위:0 바위:1 보:2
	srand(time(NULL));
	int i = rand() % 3;//0~2반환
	switch (i)
	{
	case 0:printf("가위\n"); break;
	case 1:printf("바위\n"); break;
	case 2:printf("보\n"); break;
	
	default:printf("몰라요\n"); break;
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
	case 13:printf("초등학생입니다.\n"); break;
	case 14:
	case 15:
	case 16:printf("중학생입니다.\n"); break;
	case 17:
	case 18:
	case 19:
	case 20:printf("고등학생입니다.\n"); break;
	default:printf("학생이 아닌가봐요.\n"); break;
	
	}


	return 0;
}