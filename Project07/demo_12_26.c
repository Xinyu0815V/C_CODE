﻿#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
//转义字符
int main() {
	printf("C:\tProkect07\tdemo_12_26\n");//  "\t"叫做转义字符(水平制表符，相当于Table键)
	printf("你好，初雪\n"); //转义字符："\n"（换行）
	printf("%c\n", 'a');
	printf("%c\n", '\'');//将单引号“ ' ”,转义，打印出来
	printf("%c\n", '\"');//将单引号“ " ”,转义，打印出来而不报错。
	printf("c:\test\test01.c\n");//使用“\”，软件误认为是转义字符，会导致输出错误。
	printf("c:\\test\\test01.c\n");//使用“\\”可以将转义字符转义，使之正确输出。
	printf("1.===================\n");
	//printf在打印数据时，可以指定打印的格式。
	printf("%s\n", "txy");//打印字符串"txy", 字符串需要加双引号。
	printf("%c\n", 'T');//打印字符：T，字符需要加单引号。
	printf("%d\n", 100);//打印整数：21，整数不需要加引号。
	printf("2.===================\n");
	//两个重要转义字符：
	//  \ddd ddd表示1-3个八进制数字。如：\130x
	//  \xdd dd表示2个十六进制数字。如：\x30 0
	printf("%c\n",'\130');//输出八进制130（转换为十进制为：1*8^2 + 3*8^1 + 0*8^0 = 88），  X的ASCII码值为88
	printf("%c\n",'\101');//A-65 - 八进制是：101----打印字符为A
	printf("%d\n", 'A');//在ASCII码中，A对应十进制65，所以打印出数字65，对应八进制为：101

	printf("%c\n",'\x30');//十六进制的30 对应十进制（3*16^1 + 0*16^0 = 48），ASCII码表中 48对应数字 0 ，所以此处会打印出数字0.
	//转义字符还有很多·····
	printf("3.注意事项===================\n");
	printf("%d\n",strlen("abc"));//输出3

	printf("%d\n",strlen("c:\\test\\test01.c\n"));//14? 不！ 正确答案是17.一个转义字符也算一个字符。
	printf("%d\n",strlen("\328"));//输出1？ 不！ 正确答案是 2.  八进制里没有8，所以是'\32' 和 '8' 两个字符。

	printf("4.注释===================\n");//注释：ctrl+k，Ctrl+c。取消注释：ctrl+k，Ctrl+u。
	//注释是用来解释复杂代码的，留给自己以及留给别人未来更容易阅读理解代码
	//常用“//” 来注释，少用“/**/”来注释，因为后者不支持嵌套。
	return 0;
}