#include <stdio.h>
//선언
int apple(int total, int ate);//전체 total개에서 ate개를 먹고 남은 수를 반환
int main(void) {
	//피라미터(전달값)도 받고, 반환값이 있는 함수
	/*int ret = apple(5, 2);//5개의 사과중에서 2개를 먹었어요
	printf("사과 5개중에 2개를 먹으면? %d 개가 남아요.\n", ret);*/
	printf("사과 %d 중에 %d 개를 먹으면? %d 개가 남아요.\n", 10, 4, apple(10, 4));
	return 0;
}
int apple(int total, int ate)
{
	printf("전달값과 반환값이 있는 함수입니다.\n");
	return total - ate;
}