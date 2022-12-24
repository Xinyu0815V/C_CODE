#include<stdio.h>
int main02(){
	//短整型。
	short a = 10;
	//整型。
	int b = 20;
	//长整型。
	long c = 30;
	//长长整型。
	long long d = 40;
	//打印
	printf("%hd\n",a);
	printf("%d\n", b);
	printf("%ld\n", c);
	printf("%lld\n", d);
	//两种不同的计算数据类型大小的方式
	
	unsigned int len01 = sizeof(short);
	unsigned int len02 = sizeof(int);
	unsigned int len03 = sizeof(long);
	unsigned int len04 = sizeof(long long);

	printf("短整型：%d\n",sizeof(a));
	printf("整型：%d\n", sizeof(b));
	printf("长整型：%d\n", sizeof(c));
	printf("长长整型：%d\n", sizeof(d));

	return 0;
}