#include <stdio.h>
int main(void)
{
	// ���� vs ���ڿ�
	/*char c = 'A';
	printf("%c\n", c);*/

	//���ڿ� ������ '��'�� �ǹ��ϴ� NULL ���� "\0" �� ���ԵǾ�� ��
	//char str[6] = "coding";//[c][o][d][i][n][g]+[\0]
	/*char str[7] = "coding";
	printf("%s\n",str);*/
	
	/*char str[] = "coding";
	printf("%s\n", str);
	printf("%d\n", sizeof(str));*/

	/*char str[] = "coding";
	for (int i = 0; i < sizeof(str); i++)
	{
		printf("%c\n", str[i]);
	}*/

	char kor[] = "�����ڵ�";
	printf("%s\n", kor);
	printf("%d\n", sizeof(kor));
	//���� �� ���� = 1byte
	//�ѱ� �� ���� = 2byte
	//char ũ�� = 1byte

	return 0;
}