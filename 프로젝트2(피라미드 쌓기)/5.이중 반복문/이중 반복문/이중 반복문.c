#include <stdio.h>
int main(void) {
	//이중 반복문
	for (int i = 1; i <= 3; i++) {
		printf("첫 번째 반복문 : %d\n", i);
		for (int j = 1; j <= 5; j++) {
		
			printf("         두 번째 반복문 : %d\n", j);
		}
	}
	//구구단 프로그램
	for (int a = 1; a <= 9; a++) {
		printf("%d단 계산\n",a);
		for (int b = 1; b <= 9; b++) {
			printf("%d x %d = %d\n", a, b, a*b);
		}
	}
	return 0;
}