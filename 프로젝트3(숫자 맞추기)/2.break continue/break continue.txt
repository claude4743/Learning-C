#include <stdio.h>
int main(void) {
	//break / continue
	//1번부터 30번까지 있는 반에서 1번에서 5번까지 조별 발표를 합니다.
	/*for (int i = 1; i <= 30; i++)
	{
		if (i >= 6) {
			printf("나머지 학생은 집에 가세요.\n");
			break;
		}
		printf("%d번 학생은 조별 발표를 준비를 하세요.\n", i);
	}*/

	//1번부터 30번까지 있는 반에서 7번 학생은 아파서 결석
	//7번을 제외하고 6번부터 10번까지 조별 발표를 하세요
	for (int i = 1; i <= 30; i++)
	{
		if (i >= 6 && i <= 10)
		{
			if (i == 7)
			{
				printf("%d번 학생은 결석입니다.\n", i);
				continue;//위에 프린트 동작을 하고 다음 i를 수행함
			}
			printf("%d번 학생은 조별 발표 준비를 하세요.\n", i);
		}
	}

	return 0;
}