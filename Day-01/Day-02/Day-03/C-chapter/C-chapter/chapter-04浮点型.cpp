#include<stdio.h>
int main(){
	float a = 3.14;
	double b = 3.14;
	//ʹ��  %.+����+f/lf ��ȷ������С��������λ��Ĭ����λ��
	printf("%f\n", a);
	printf("%lf\n", b);
	printf("%.3f\n", a);
	printf("%.2lf\n", b);
	//ʹ��sizeof��ȷ���������ʹ�С��
	printf("fioat�������͵Ĵ�СΪ%d�ֽ�\n", sizeof(float));
	printf("double�������͵Ĵ�СΪ%d�ֽ�\n", sizeof(double));
	return 0;
}