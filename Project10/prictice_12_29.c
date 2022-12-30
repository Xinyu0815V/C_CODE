#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//typedef
//typedef unsigned int u_int;//类型重命名
//int main() {
//	unsigned int num = 100;
//	u_int num2 = 100;//两条语句作用完全相同
//	return 0;
//}

//void test() {
//	static int a = 1;//static修饰局部变量，改变了局部变量的生命周期（本质上改变了变量的存储类型。）
//	//栈区：局部变量，函数参数；堆区：动态内存分配；静态区：全局变量，static修饰的静态变量。
//	a++;
//	printf("%d\n", a);
//}
//
//int main() {
//	int i = 0;
//	while (i < 10) {
//		test();
//		i++;
//	}
//	return 0;
//}
//声明全局变量，在整个工程中都可以使用。

//extern int g_val;//用来声明外部符号。
//int main() {
//	printf("%d\n", g_val);
//	return 0;
//}



//extern int add(int, int);//声明外部函数。
//int main() {
//	int a = 10;
//	int b = 20;
//	int sum = add(a, b);
//	printf("sum = %d\n", sum);
//	return 0;
//}


//define 是一个预处理指令
//1.define 定义符号
//#define MAX 1000
//int main() {
//	printf("%d\n", MAX);
//	return 0;
//}



//2.define 定义宏，宏可以简单理解为一种模式替换。
#define ADD(x,y) ((x)+(y))//把宏的整体括起来，会更加严谨
int main() {
	printf("%d\n", 4*ADD(2,3));//4*2+3
	return 0;
}


