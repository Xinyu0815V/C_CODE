#include<stdio.h>
int main02()
{
	char ch1;
	char ch2;
	char ch3;
	int a;
	int b;
	printf("������ch1���ַ���");
	ch1 = getchar();
	printf("ch1 = %c\n", ch1);
	getchar();

	printf("������ch2���ַ���");
		ch2 = getchar();
	printf("ch2 = %c\n", ch2);

	printf("������ch3���ַ���");
	ch3 = getchar();
	printf("ch3 = %c\n", ch3);

	printf("������a��b��ֵ��");
		scanf_s("%d\n", &a);
		scanf_s("%d\n", &b);
		printf("a + b = %d", a + b);
	return 0;
}