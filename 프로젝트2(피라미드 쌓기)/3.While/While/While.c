#include <stdio.h>
int main(void) {

	/*
	//반복문
	//for문(선언; 조건; 증감)
	{
	for (int a = 1; a <= 10; a++)
	{
	printf("Hello World %d\n", a);
	}
	return 0;
	}*/
	//while (조건) { }
	int a = 1;
	while (a <= 10)
	{
		printf("Hello World %d\n", a++);
		//a++;
	}
	return 0;
}