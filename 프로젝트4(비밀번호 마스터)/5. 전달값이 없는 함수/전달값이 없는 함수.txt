#include <stdio.h>
void fuction_without_params();
int main(void)
{
	//파라미터(전달값)이 없는 함수
	fuction_without_params();
	return 0;
}

void fuction_without_params()
{
	printf("전달값이 없는 함수 입니다.\n");
}