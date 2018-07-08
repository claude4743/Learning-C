#include <stdio.h>
int main(void)
{
	/*printf("hello world\n");
	printf("hello world\n");
	printf("hello world\n");
	printf("hello world\n");
	printf("hello world\n");
	printf("hello world\n");
	printf("hello world\n");
	printf("hello world\n");
	printf("hello world\n");
	printf("hello world\n");*/

	//증감연산//
	int a = 10;
	printf("a는 %d\n", a);
	a++;
	printf("a는 %d\n", a);
	a++;
	printf("a는 %d\n", a);

	int b = 20;
	printf("b는 %d\n", ++b);//b= b+1
	printf("b는 %d\n", b++);//이문장을 다 수행하고 나서 다음 문장(아래문장)을 수행할때 +1 
	printf("b는 %d\n", b);

	int i = 1;
	printf("hello world %d\n", i++);
	printf("hello world %d\n", i++);
	printf("hello world %d\n", i++);
	printf("hello world %d\n", i++);
	printf("hello world %d\n", i++);
	printf("hello world %d\n", i++);
	printf("hello world %d\n", i++);
	printf("hello world %d\n", i++);
	printf("hello world %d\n", i++);
	printf("hello world %d\n", i++);
	
	return 0;
}