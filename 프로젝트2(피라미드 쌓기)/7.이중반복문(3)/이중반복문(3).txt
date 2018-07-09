#include <stdio.h>
int main(void) {
	/*거꾸로별
    *
   **
  ***
 ****
*****
(빈칸을 S라고 할때)
SSSS*
SSS**
SS***
S****
*****
*/
	for (int i = 0; i <5; i++) {
		for (int j = i; j < 5 - 1; j++) {
			printf("S");
		}
		for (int k = 0; k <= i; k++) {
			printf("*");
		}
		printf("\n");
	}

	for (int a = 0; a <5; a++) {
		for (int b = a; b < 5 - 1; b++) {
			printf(" ");
		}
		for (int c = 0; c <= a; c++) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
