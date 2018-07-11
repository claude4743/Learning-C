#include <stdio.h>
int main(void) {
	/*//버스를 탄다고 가정. 학생/ 일반인으로 구분 (일반인:20세)
	int age = 15;
	//if (조건) {...} else {...}
	if (age >= 20)
		printf("일반인입니다.\n");
	else
		printf("학생입니다.\n");*/

// 초등학생(8-13)/ 중학생(14-16)/ 고등학생(17-19)으로 나누면?
// if/ else if/ else
int age = 25;
if (age >= 8 && age <= 13)
{
	printf("초등학생입니다\n");
}
else if (age >= 14 && age <= 16)
{
	printf("중학생입니다.\n");
}

else if (age >= 17 && age <= 19) {
	printf("고등학생입니다.\n");
}
else
printf("성인입니다.\n");
	
return 0;
}