#include <stdio.h>

/*int main(void) {
	
	//function
	//계산기
	int num = 2;
	printf("num은 %d 입니다.\n", num);

	//2 + 3은?
	num = num + 3;//num + = 3
	printf("num은 %d 입니다.\n", num);//5

								  //5 - 1은?
	num -= 1;//num = num - 1;
	printf("num은 %d 입니다.\n", num);//4

								  //4 x 3 은?
	num *= 3;
	printf("num은 %d 입니다.\n", num);//12

								  //12 / 6은?
	num /= 6;
	printf("num은 %d 입니다.\n", num);//2
	*/

//선언
void p(int num);
int main(void) {

	int num = 2;
	//printf("num은 %d 입니다.\n", num);
	p(num);

	//2 + 3은?
	num = num + 3;//num + = 3
	//printf("num은 %d 입니다.\n", num);//5
	p(num);

	//5 - 1은?
	num -= 1;//num = num - 1;
    //printf("num은 %d 입니다.\n", num);//4
	p(num);

	 //4 x 3 은?
	num *= 3;
	//printf("num은 %d 입니다.\n", num);//12
	p(num);

	 //12 / 6은?
	num /= 6;
	//printf("num은 %d 입니다.\n", num);//2
	p(num);


	return 0;
}
//정의
void p(int num)
{
	printf("num은 %d 입니다.\n", num);
}