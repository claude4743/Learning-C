#include <stdio.h>
int main(void)
{

	char str[32];

	printf("Your phone number : ");
	scanf_s("%[^\n]s", str, 32);

	printf("Check phone number : %s\n", str);
	
	int input;
	printf("값을 입력받으세요 : ");
	scanf_s("%d", &input);
	printf("입력값 : %d\n", input);
	return 0;
}