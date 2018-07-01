#include <stdio.h>
int main(void) {
	// 정수형 변수에 대한 예제
	/*int age = 12;
	printf("%d\n", age);
	age = 13;
	printf("%d", age);*/

	//실수형 변수에 대한 예제
	float f = 46.5f;
	printf("%f\n",f);
	printf("%.2f\n", f);//소수점 둘째자리까지
	double d = 44.428;
	printf("%lf\n", d);
	printf("%.2lf\n", d);

	return 0;

}