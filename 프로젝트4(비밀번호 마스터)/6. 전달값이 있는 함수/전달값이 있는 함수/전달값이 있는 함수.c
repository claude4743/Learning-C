#include <stdio.h>
//선언

void function_with_params(int num1, int num2, int num3);

int main(void)
{
//파라미터(전달값)이 있는 함수
	function_with_params(1, 2, 3);
return 0;
}
void function_with_params(int num1, int num2, int num3)
{
	printf("전달값이 있는 함수이면, 전달받은 값은 %d %d %d 입니다\n", num1, num2, num3);

}