#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
#include<string.h>
#define SIZE 10
int main03(){
	int a[SIZE];
	printf("请输入王子猪们的体重：\n");
	for (int i = 0; i < SIZE; i++){
		scanf_s("%d",&a[i]);
	}
	int max = 0;
	for (int i = 0; i < SIZE; i++){
		if (max < a[i]){
			max = a[i];
		}
	}
	printf("最重的王子猪为：%d\n", max);
	return 0;
}