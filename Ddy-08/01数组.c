#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
#include<string.h>
int main01(){
	int a[10] = {2,5,8,9,6,3,7,4,1,10};
	a[5] = a[7];
	a[3] = a[1] * 5;   //����ɲ�����㡣

	//����forѭ����������Ĵ�ӡ����Ԫ�ء�
	for (int i = 0; i <= 9; i++){
		printf("%d\n", a[i]);
	}
	printf("%d\n", sizeof(a[10]));//����Ԫ��a[]���ڴ�����ռ�ռ䡣
	printf("%d\n", sizeof(a));   //����a���ڴ�����ռ�ռ䡣
	printf("%d\n", sizeof(a) / sizeof(a[0]));//������Ԫ�ظ�����
	return 0;
}

