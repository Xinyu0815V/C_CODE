#include<stdio.h>
int main(){
	float a = 3.14;
	double b = 3.14;
	//使用  %.+数字+f/lf 来确定保留小数点后多少位，默认六位。
	printf("%f\n", a);
	printf("%lf\n", b);
	printf("%.3f\n", a);
	printf("%.2lf\n", b);
	//使用sizeof来确定数据类型大小。
	printf("fioat数据类型的大小为%d字节\n", sizeof(float));
	printf("double数据类型的大小为%d字节\n", sizeof(double));
	return 0;
}