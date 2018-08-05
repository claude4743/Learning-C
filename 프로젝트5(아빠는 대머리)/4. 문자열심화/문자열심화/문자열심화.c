#include <stdio.h>
int main(void)
{
	/*char c_array[7] = { 'c','o','d','i','n','g' };
	printf("%s\n", c_array);*/

	char c_array[10] = { 'c','o','d','i','n','g' };
	//printf("%s\n", c_array);
	/*for (int i = 0; i < sizeof(c_array); i++)
	{
		printf("%c\n", c_array[i]);
	}*/
	/*for (int i = 0; i < sizeof(c_array); i++)
	{
		printf("%d\n", c_array[i]);//ASCII 코드값이 출력 (NULL문자는 0으로 입력됨)
	}*/
	//경찰서 조서 쓰기
	char name[256];
		printf("이름을 입력하세요\ : ");
		scanf_s("%s", name, sizeof(name));
		printf("%s\n", name);
	return 0;
}