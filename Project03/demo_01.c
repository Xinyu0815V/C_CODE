#define _CRT_SECURE_NO_WARNINGS 1
//��ϰ���룬��һ������
//��������main������
//c���Դ����Ǵ���������һ�п�ʼִ�еģ�����һ��Ҫ��main������
#include <stdio.h>
//int main()        //һ�������п����ж��.c���������Ƕ��.c������ֻ����һ��main������
//{
//	printf("��ã�C\n"); //printf������ʹ�ã���Ҫ����ͷ�ļ� stdio.h
//
//
//	//�������ͣ������ͣ�����С���������ͣ���������������������
//	/*
//	char �ַ���������
//	short ������
//	int ����
//	long ������
//	long long ��������
//	��������
//	*/
//	char ch = 'a';//�ַ�����
//	int age = 21; //����
//	short num = 10;//������
//	//long, long long
//	float weight = 81.5;//�����ȸ�����
//	double height = 185.85;
//
//	//��ӡ����
//	printf("%d\n", age);
//}

int main() {
	//sizeof�������ڼ������ʹ�С
	printf("%d\n", sizeof(char));
	printf("%d\n", sizeof(short));
	printf("%d\n", sizeof(int));
	printf("%d\n", sizeof(long));
	printf("%d\n", sizeof(long long));
	printf("%d\n", sizeof(float));
	printf("%d\n", sizeof(double));

	return 0;
}