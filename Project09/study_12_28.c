#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main() {
//	//操作符2
//	int a = 2;
//	printf("a = %d\n", ~a);//按位取反
//	printf("=======\n");
//	int b = 10;
//	int c = ++b;//先++，后使用。
//	printf("b = %d\n", b);
//	printf("c = %d\n", c);
//	printf("=======\n");
//	int d = 10;
//	int e = d++;//先使用，再++。
//	printf("d = %d\n", d);
//	printf("e = %d\n", e);
//	return 0;
//}
//关系操作符：==  !=  >=  <=  <  >
//逻辑操作符： 逻辑与：&&  逻辑或||
//int main() {
//	int a = 1;
//	int b = 0;
//	int c = 0;
//	int d = a && b;
//	int e = a && c;
//	int f = a || b;
//	int g = a || c;
//	int h = b || c;
//	printf("%d\n", d);//两个同时为真，结果为真。
//	printf("%d\n", e);//两个中有一个为假，结果为假。
//	printf("%d\n", f);//两个中有一个为真，结果为真。
//	printf("%d\n", g);
//	printf("%d\n", h);//两个都为假，结果为假。
//	return 0;
//}

//int main() {
//	int a = (int)3.14;//强制类型转换,尽量不使用。
//	printf("a = %d\n", a);
//	return 0;
//}

int main() {
	//条件操作符 exp1?exp2:exp3(三目操作符)
	//exp1成立，计算exp2.   exp1不成立，计算exp3.
	int a = 1;
	int b = 2;
	int max = 0;
	/*if (a > b) {
		max = a;
		printf("最大值为a：%d\n", max);
	}
	else {
		max = b;
		printf("最大值为b：%d\n", max);
	}*/

	max = a > b ? a : b;//三目操作符，比ifelse简便
	printf("%d\n", max);

	//逗号表达式
	return 0;
}
