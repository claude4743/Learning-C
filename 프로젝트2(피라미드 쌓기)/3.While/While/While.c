#include <stdio.h>
int main(void) {

	/*
	//�ݺ���
	//for��(����; ����; ����)
	{
	for (int a = 1; a <= 10; a++)
	{
	printf("Hello World %d\n", a);
	}
	return 0;
	}*/
	//while (����) { }
	int a = 1;
	while (a <= 10)
	{
		printf("Hello World %d\n", a++);
		//a++;
	}
	return 0;
}