#include <stdio.h>
void function_without_return();
int main(void)
{
//�Լ� ����
//��ȯ���� ���� �Լ�
	function_without_return();
	return 0;
}
void function_without_return()
{
	printf("��ȯ���� ���� �Լ��Դϴ�.\n");
}