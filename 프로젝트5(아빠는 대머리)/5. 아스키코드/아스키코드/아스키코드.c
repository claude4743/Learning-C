#include <stdio.h>
int main(void) {
	//���� : ASCII �ڵ�? ANSI (�̱�ǥ����ȸ) ���� ������ ǥ�� �ڵ� ü��
	// 7bit, �� 128 �� �ڵ� (0~127)
	// a : 97 (���� a �� �ƽ�Ű�ڵ� ������)
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