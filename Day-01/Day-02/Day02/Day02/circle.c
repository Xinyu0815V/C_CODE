#include<stdio.h>
int main01()
{
	const float PI = 3.14159;//定义浮点型常量PI。
	float R = 3;
	float S = PI * R * R;
	float L = 2 * PI * R;
	printf("圆的面积为%f\n", S);
	printf("圆的周长为%f\n", L);
	return 0;
}