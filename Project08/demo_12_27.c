#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//1.初识选择语句。
/*int main() {
	int input = 0;
	printf("能走到最后么？\n");
	printf("1.双向奔赴\t2.顺其自然?>:");
	scanf("%d",&input);

	if (input == 1){
		printf("那就一直在一起吧！\n");
	}
	else{
		printf("那就看缘分喽\n");
	}

	return 0;
}*/



//2.初识循环语句。
//int main() {
//	int practice = 1;
//	while (practice < 1000) {
//		printf("重复的练习：%d\n",practice);
//		practice++;
//	}
//	if (practice == 1000) {
//		printf("我亦无他，唯手熟尔。");
//	}
//	return 0;
//}



//3.初识函数和数组
//int add(int x,int y) {
//	int z = 0;
//	z = x + y;
//	return z;
//}
//int main() {
//	int num1 = 0;
//	int num2 = 0;
//	printf("输入两个数字：");
//	scanf("%d%d",& num1, &num2);
//	//int sum = num1 + num2;
//	//用函数的方式
//	int sum = add(num1, num2);
//	printf("两个数字之和是：%d", sum);
//	return 0;
//}


//初识数组
//int main() {
//	//int a = 1;
//	//int b = 2;
//	//int c = 3;
//	//......
//	
//
//	//数组：一组相同类型的元素的集合
//	//十个整数1--10存起来
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//	char ch[5] = { 'a','b','c' };//不完全初始化，剩余的默认为0
//	int i = 0;
//	while (i < 10) {
//		printf("%d\n", arr[i]);
//		i++;
//	}
//	return 0;
//}


//初识操作符
//int main() {
//	//算数操作符  +,-,*,/.
//	//移位操作符：>>,<<
//	int a = 9 / 2;//整数除法
//	int c = 9 % 2;//整数取模（余）
//	printf("a = %d\n", a);//除法
//	printf("c = %d\n", c);//取模
//	float b = 9 / 2.0;//小数除法
//	printf("b = %f\n", b);
//	return 0;
//}

//int main() {
//	int a = 2;
//	int b = a << 1;//左移操作符，移动的是二进制位，右移同理。
//	printf("%d\n", b);
//	return 0;
//}


//&：按位与  |：按位或   ^:按位非
// 复合操作符：a=a+5; 等价于 a+=5;  .......
//单目操作符：只有一个操作数的操作符，  双目操作符，三目操作符

int main() {  
	int a = 10;
	int arr[10] = { 0 };
	printf("%d\n", sizeof(int));
	printf("%d\n", sizeof(long long));//sizeof（）是一个操作符，用来计算（）内的计算类型或变量的大小。
	printf("%d\n", sizeof a);//如果sizeof后是变量，可以省略括号，但是如果是关键字，则不能省略。通常使用时不省略括号。
	printf("%d\n", sizeof(arr));//计算数组大小。十个int类型，所以应该输出40(单位是字节)
	printf("%d\n", sizeof(arr)/sizeof(arr[0]));//计算数组元素个数。

	return 0;
}