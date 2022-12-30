#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//初识指针。
//内存如何编号？一个内存单元是多大空间？
//32位机器，---32根地址线---物理线---通电---1/0.(电信号转换为数字信号：1和0组成的二进制序列)
//共有2^32个地址（32位计算机）
//一个内存单元是一个字节
//int main() {
//	int a = 10;//a在内存中要分配的空间---4个字节
//	printf("&a = %p\n", &a);//%p专门用来打印地址
//	int * pa = &a;//pa是用来存放地址的，在c语言中pa叫做指针变量。
//	// * 说明pa是指针变量，*前的int说明pa指向的对象是int类型
//
//	char ch = 'w';
//	char* pc = &ch;
//	printf("&ch = %p\n", &ch);
//	return 0;
//}

//int main() {
//	int* pa = &pa;
//	return 0;
//}

//指针就是地址。
//int main() {
//	int a = 10;
//	int * pa = &a;
//	*pa = 20;//这个* 叫做解引用操作符 ，*pa就是通过pa里边的地址，找到a
//	printf("%d\n",a);
//	return 0;
//}

//int main() {
//	printf("%d\n", sizeof(char*));
//	printf("%d\n", sizeof(short*));
//	printf("%d\n", sizeof(int*));
//	printf("%d\n", sizeof(long*));
//	printf("%d\n", sizeof(long long*));
//	printf("%d\n", sizeof(float*));
//	printf("%d\n", sizeof(double*));
//	//指针是用来存放地址的，指针需要多大空间，取决于地址的存储需要多大空间
//	//指针的大小是相同的。32位的计算机平台上，指针大小为4个Byte。64位的计算机平台上，指针大小为8个Byte。
//	return 0;
//}


//结构体可以让C语言创建出新的类型出来
//创建一个学生
struct Student {
	char name[20];
	char gender[10];
	int age;
	double score;
};
//创建一个书的类型；
struct Book {
	char name[20];//成员变量
	float price;
	char id[30];
};
int main() {
	struct Student S = {"程钒","女",18,95.5};//结构体的创建和初始化,字符类型的参数要是用 --""--
	printf("1:%s %s %d %lf\n",S.name,S.gender,S.age,S.score);//结构体变量.成员变量
	struct Student* ps = &S;
	printf("2:%s %s %d %lf\n",(*ps).name,(*ps).gender,(*ps).age,(*ps).score);

	printf("3:%s %s %d %lf\n",ps->name,ps->gender,ps->age,ps->score);//使用格式：“结构体指针->成员变量名”
	return 0;
}
