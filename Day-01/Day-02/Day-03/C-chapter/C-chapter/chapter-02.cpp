#include<stdio.h>
int main02(){
	//�����͡�
	short a = 10;
	//���͡�
	int b = 20;
	//�����͡�
	long c = 30;
	//�������͡�
	long long d = 40;
	//��ӡ
	printf("%hd\n",a);
	printf("%d\n", b);
	printf("%ld\n", c);
	printf("%lld\n", d);
	//���ֲ�ͬ�ļ����������ʹ�С�ķ�ʽ
	
	unsigned int len01 = sizeof(short);
	unsigned int len02 = sizeof(int);
	unsigned int len03 = sizeof(long);
	unsigned int len04 = sizeof(long long);

	printf("�����ͣ�%d\n",sizeof(a));
	printf("���ͣ�%d\n", sizeof(b));
	printf("�����ͣ�%d\n", sizeof(c));
	printf("�������ͣ�%d\n", sizeof(d));

	return 0;
}