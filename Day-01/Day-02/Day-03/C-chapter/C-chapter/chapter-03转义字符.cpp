#include<stdio.h>
int main03(){
	//�ַ��ͱ���
	char ch00 = '0';
	char ch01 = '5';
	char ch02 = 'a';
	char ch03 = 'A';
	//��ӡ�ַ�����
	printf("%c\n",ch00);
	printf("%c\n", ch01);
	printf("%c\n", ch02);
	printf("%c\n", ch03);
	//��ӡ��ĸa��Ӧ��ʮ������
	printf("%d\n", ch00);
	printf("%d\n", ch01);
	printf("%d\n", ch02);
	printf("%d\n", ch03);
	//�����������ʹ�С
	printf("�ַ��ʹ�С��%d\n", sizeof(ch00));
	printf("�ַ��ʹ�С��%d\n", sizeof(ch01));
	printf("�ַ��ʹ�С��%d\n", sizeof(ch02));
	printf("�ַ��ʹ�С��%d\n", sizeof(ch03));
	printf("%d\n", ch02 - ch03);
	printf("%d\n", ch00 - ch03);
	//��ʹ�ò�ͬռλ��ʱ������Ӧ����Ľ��������ռλ���ı���ı�
	printf("%c\n", 'a' - 32);
	printf("%d\n", 'a' - 32);
	return 0;
}