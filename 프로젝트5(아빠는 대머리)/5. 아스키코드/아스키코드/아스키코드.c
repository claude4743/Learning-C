#include <stdio.h>
int main(void) {
	//참고 : ASCII 코드? ANSI (미국표준협회) 에서 제시한 표준 코드 체계
	// 7bit, 총 128 개 코드 (0~127)
	// a : 97 (문자 a 의 아스키코드 정수값)
	// A : 65
	// 0 : 48

	printf("%c\n", 'a');
	printf("%d\n", 'a');

	printf("%c\n", 'b');
	printf("%d\n", 'b');

	printf("%c\n", 'A');
	printf("%d\n", 'A');

	printf("%c\n", '\0');
	printf("%d\n", '\0');

	printf("%c\n", '0');
	printf("%d\n", '0');
	
	printf("%c\n", '1');
	printf("%d\n", '1');

	printf("%c\n", "1");
	printf("%d\n", "1");
	
	return 0;
}