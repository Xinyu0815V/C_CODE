#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
int main() {
	//字符串：就是一串字符---用双引号括起来的一串字符
	//字符数组。数组：一组相同类型的元素
	//字符串在结尾位置隐藏了一个‘/0’字符串，为字符串的结束标志。
	char arr1[] = "hello C";
	//对比数组三与数组二的运行结果，可知'\0'在字符串结尾是必要的。
	char arr2[] = {'a','b','c'};
	char arr3[] = {'a','b','c','\0'};
	printf("数组1：%s\n",arr1 );
	printf("数组2：%s\n",arr2 );
	printf("数组3：%s\n",arr3 );
	printf("========================\n");
	//求字符串长度
	int len = strlen("hello C");
	printf("字符串长度为：%d\n", len);//求字符串长度时，不把‘\0’计算在内。
	printf("字符串长度为：%d\n", strlen(arr1));
	printf("字符串长度为：%d\n", strlen(arr2));//会打印出一个随机值。
	return 0;
}