#include<stdio.h>
int main03(){
	//字符型变量
	char ch00 = '0';
	char ch01 = '5';
	char ch02 = 'a';
	char ch03 = 'A';
	//打印字符变量
	printf("%c\n",ch00);
	printf("%c\n", ch01);
	printf("%c\n", ch02);
	printf("%c\n", ch03);
	//打印字母a对应的十进制数
	printf("%d\n", ch00);
	printf("%d\n", ch01);
	printf("%d\n", ch02);
	printf("%d\n", ch03);
	//计算数据类型大小
	printf("字符型大小：%d\n", sizeof(ch00));
	printf("字符型大小：%d\n", sizeof(ch01));
	printf("字符型大小：%d\n", sizeof(ch02));
	printf("字符型大小：%d\n", sizeof(ch03));
	printf("%d\n", ch02 - ch03);
	printf("%d\n", ch00 - ch03);
	//当使用不同占位符时，所对应输出的结果类型随占位符改变而改变
	printf("%c\n", 'a' - 32);
	printf("%d\n", 'a' - 32);
	return 0;
}