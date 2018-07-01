#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
int main(void) {
	// 정수형 변수에 대한 예제
	/*int age = 12;
	printf("%d\n", age);
	age = 13;
	printf("%d", age);*/

	//실수형 변수에 대한 예제
	/*float f = 46.5f;
	printf("%f\n", f);
	printf("%.2f\n", f);//소수점 둘째자리까지
	double d = 44.428;
	printf("%lf\n", d);
	printf("%.2lf\n", d);*/

	//상수에 대한 예제
	/*const int Year = 2000;//const를 써줌으로써 상수로 만들어줌 = 상수의 개념화
	printf("태어난 년도 : %d\n", Year);*/
	//Year = 2001;

	//printf에 대한 예제
	//연산
	/*int add = 3 + 7;//10
	printf("3 + 7 = %d\n", add);
	printf("%d + %d = %d\n", 39, 78, 39 + 78);//더하기
	printf("%d - %d = %d\n", 39, 78, 39 - 78);//빼기
	printf("%d * %d = %d\n", 39, 78, 39 * 78);//곱하기
	printf("%d / %d = %d\n", 39, 78, 39 / 78);//나누기(몫)
	printf("%d / %d의 나머지는 %d\n", 9, 4, 9 % 4);//나누기(나머지)*/

	//scanf에 대한 예제
	//키보드 입력을 받아서 저장
	
	/*int input;
	printf("값을 입력받으세요 : ");
	scanf_s("%d", &input);
	printf("입력값 : %d\n", input);

	int one, two, three;
	printf("세 개의 값을 입력 받으세요 : \n");
	scanf_s("%d %d %d", &one, &two, &three);
	printf("첫번째 값 : %d\n", one);
	printf("두번째 값 : %d\n", two);
	printf("세번째 값 : %d\n", three);

	//문자(한 글자), 문자열(여러글자)
	char c = 'A';
	printf("%c\n", c);*/
	
	char str[50];
	/*printf("문자열을 입력하세요 : ");
	scanf_s("%s",str,sizeof(str));
	printf("%s\n", str);*/

	
	printf("띄어쓰기해서 문장을 입력하세요 : ");
	scanf("%[^\n]s", str);
	printf("%s\n", str);
	return 0;

}