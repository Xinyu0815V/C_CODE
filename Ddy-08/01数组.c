#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
#include<string.h>
int main01(){
	int a[10] = {2,5,8,9,6,3,7,4,1,10};
	a[5] = a[7];
	a[3] = a[1] * 5;   //数组可参与计算。

	//利用for循环，更方便的打印数组元素。
	for (int i = 0; i <= 9; i++){
		printf("%d\n", a[i]);
	}
	printf("%d\n", sizeof(a[10]));//数组元素a[]在内存中所占空间。
	printf("%d\n", sizeof(a));   //数组a在内存中所占空间。
	printf("%d\n", sizeof(a) / sizeof(a[0]));//数组中元素个数。
	return 0;
}

