#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#define MAX 10000;
//作用域和生命周期
//局部变量的作用域：变量所在的局部范围。
//全局变量的作用域：
extern int A;//声明变量，使得定义在project02中的全局变量A能够在本项目中使用。
int main() {
	printf("你好，C2。\n");
	int a = 10;
	printf("a = %d\n", a);//a的作用域就在大括号内部。a在哪里能够使用，哪里就是a的作用域。
	printf("A = %d\n", A);//变量A在整个工程里都可以使用。


	//变量的生命中周期：变量的创建与销毁之间的时间段。
	//局部变量的生命周期：进入局部范围生命开始，跳出局部范围生命结束。
	//全局变量的生命周期：就是程序的生命周期。
	{
		int a = 10;
		printf("a=%d\n", a);
	}

	//常量：不变的量。
	//1.字面常量，没有什么意义，只是存在。
	3.14;
	'a';   
	//2.const修饰的常变量
	const int num = 10;//加上const之后，num就从一个变量转换成了一个常量（常变量）。
	//num = 20;---->变量num不能被赋值。
	printf("num = %d\n", num);
	//3.#define 定义的标识符常量,所定义的MAX值不可以改变。
	int n = MAX;
	printf("n = %d\n", n);
	printf("=====================================\n");
	//4.枚举常量，可以一一列举的常量。
	enum Sex
	{
		//枚举类型的变量的可能取值（只能是这三种），也可以赋初值。
		MALE,
		FEMALE,
		SECRET
	};
	enum Sex s = MALE;//不可以改动的常量。
	printf("%d\n", MALE);
	printf("%d\n", FEMALE);
	printf("%d\n", SECRET);

	return 0;
}
