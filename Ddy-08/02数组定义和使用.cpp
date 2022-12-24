#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
#include<string.h>
#define SIZE 10
int main02()
{
	//int a[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 12, 13, 14, 15, 16, 17, 18 };
	//int a[10] = { 1, 2, 3, 4, 5, 6 };    //  1,2,3,4,5,6,0,0,0,0
	//int a[10];       //全部乱码。


	/*int i = 10;
	int a[i];*/       //错误写法，数组[]内必须是常量，或常量表达式  a[10],a[2*3]

	/*for (int i = 0; i < sizeof(a) / sizeof(a[0]); i++){
		printf("%d\n", a[i]);
	}
	return 0;*/


	int a[SIZE];   //定义数组之前，必须知道数组大小。
	printf("请输入十个数组元素的值：\n");
	for (int i = 0; i < SIZE; i++)
	{
		scanf_s("%d", &a[i]);
	}
	for (int i = 0; i < SIZE; i++){
		printf("%d\n", a[i]);
	}
	return 0;
}



int main0202(){
	int a[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	for (int i = 0; i < 20; i++){
		printf("%d\n", a[i]);
	}
	return 0;
}