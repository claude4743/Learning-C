#include <stdio.h>
void p(int num);

void function_without_return();
int function_with_return();
int main(void)
{
//반환값이 있는 함수
	int ret = function_with_return();
	p(ret);

	return 0;
}

void p(int num)
{
	printf("num은 %d 입니다\n", num);
}

void function_without_return()
{
	printf("반환값이 없는 함수 입니다.\n");
}

int function_with_return()
{
	printf("반환값이 있는 함수 입니다.\n");
	return 10;
}