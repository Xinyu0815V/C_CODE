#define _CRT_SECURE_NO_WARNINGS 1
//复习代码，第一个代码
//主函数（main函数）
//c语言代码是从主函数第一行开始执行的，所以一定要有main函数。
#include <stdio.h>
//int main()        //一个工程中可以有多个.c函数，但是多个.c函数中只能有一个main函数。
//{
//	printf("你好，C\n"); //printf函数的使用，需要引用头文件 stdio.h
//
//
//	//数据类型，浮点型（描述小数），整型（描述整数）·····
//	/*
//	char 字符数据类型
//	short 短整型
//	int 整型
//	long 长整型
//	long long 超长整型
//	····
//	*/
//	char ch = 'a';//字符类型
//	int age = 21; //整型
//	short num = 10;//短整型
//	//long, long long
//	float weight = 81.5;//单精度浮点型
//	double height = 185.85;
//
//	//打印整数
//	printf("%d\n", age);
//}

int main() {
	//sizeof函数用于计算类型大小
	printf("%d\n", sizeof(char));
	printf("%d\n", sizeof(short));
	printf("%d\n", sizeof(int));
	printf("%d\n", sizeof(long));
	printf("%d\n", sizeof(long long));
	printf("%d\n", sizeof(float));
	printf("%d\n", sizeof(double));

	return 0;
}