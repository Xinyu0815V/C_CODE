#include<stdio.h>
int main01()
{
	const float PI = 3.14159;//���帡���ͳ���PI��
	float R = 3;
	float S = PI * R * R;
	float L = 2 * PI * R;
	printf("Բ�����Ϊ%f\n", S);
	printf("Բ���ܳ�Ϊ%f\n", L);
	return 0;
}