#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
#include<string.h>
#define SIZE 10
int main03(){
	int a[SIZE];
	printf("�������������ǵ����أ�\n");
	for (int i = 0; i < SIZE; i++){
		scanf_s("%d",&a[i]);
	}
	int max = 0;
	for (int i = 0; i < SIZE; i++){
		if (max < a[i]){
			max = a[i];
		}
	}
	printf("���ص�������Ϊ��%d\n", max);
	return 0;
}