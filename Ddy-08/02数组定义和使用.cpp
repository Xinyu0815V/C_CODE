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
	//int a[10];       //ȫ�����롣


	/*int i = 10;
	int a[i];*/       //����д��������[]�ڱ����ǳ������������ʽ  a[10],a[2*3]

	/*for (int i = 0; i < sizeof(a) / sizeof(a[0]); i++){
		printf("%d\n", a[i]);
	}
	return 0;*/


	int a[SIZE];   //��������֮ǰ������֪�������С��
	printf("������ʮ������Ԫ�ص�ֵ��\n");
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