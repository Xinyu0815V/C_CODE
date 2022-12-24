#include<stdio.h>
int main()
{
	int price = 0;
	int weight = 0;
	printf("请输入购买商品的价格和斤数；\n");
	scanf_s("%d%d", &price,&weight);
	int sum = price * weight;
	printf("商品总价为：%d",sum);

}