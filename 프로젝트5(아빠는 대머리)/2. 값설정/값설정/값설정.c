#include <stdio.h>
int main(void)
{
	//값 설정 방법
	//값은 반드시 초기화 시켜야 함
	/*int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };//초기화(선언) 시키는 작업
	for (int i = 0; i<10; i++)
	{
		printf("%d\n", arr[i]);
	}*/

	/*
	//배열 크기는 항상 상수로 선언
	int size = 10;
	int arr[10];*/

	/*
	int arr[10] = { 1,2 };//3번째 값부터 자동으로 '0'으로 초기화
	for (int i = 0; i<10; i++)
	{
		printf("%d\n", arr[i]);
	}
	*/

	//int arr[] = { 1,2 };// arr[2]라고 선언한 것과 같음
	float arr_f[5] = { 1.0f,2.0f,3.0f };
	for (int i = 0; i<5; i++)
	{
		printf("%.2f\n", arr_f[i]);
	}
	return 0;
}