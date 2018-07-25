#include <stdio.h>
void function_without_return();
int main(void)
{
//함수 종류
//반환값이 없는 함수
	function_without_return();
	return 0;
}
void function_without_return()
{
	printf("반환값이 없는 함수입니다.\n");
}