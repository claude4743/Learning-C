#include <stdio.h>
int main(void) {
	// ������ ������ ���� ����
	/*int age = 12;
	printf("%d\n", age);
	age = 13;
	printf("%d", age);*/

	//�Ǽ��� ������ ���� ����
	/*float f = 46.5f;
	printf("%f\n", f);
	printf("%.2f\n", f);//�Ҽ��� ��°�ڸ�����
	double d = 44.428;
	printf("%lf\n", d);
	printf("%.2lf\n", d);*/

	//����� ���� ����
	/*const int Year = 2000;//const�� �������ν� ����� ������� = ����� ����ȭ
	printf("�¾ �⵵ : %d\n", Year);*/
	//Year = 2001;

	//printf�� ���� ����
	//����
	int add = 3 + 7;//10
	printf("3 + 7 = %d\n", add);
	printf("%d + %d = %d\n", 39, 78, 39 + 78);//���ϱ�
	printf("%d - %d = %d\n", 39, 78, 39 - 78);//����
	printf("%d * %d = %d\n", 39, 78, 39 * 78);//���ϱ�
	printf("%d / %d = %d\n", 39, 78, 39 / 78);//������(��)
	printf("%d / %d�� �������� %d\n", 9, 4, 9 % 4);//������(������)

	return 0;
}