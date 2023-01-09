#define _CRT_SECURE_NO_WARNINGS
//回文数 
//一个数从左边读和从右边读是一模一样的即该数为回文数
#include<stdio.h>
int main()
{
	int num, x, y = 0;
	printf("请输入一个数：");
	scanf("%d", &num);
	x = num;
	while (x > 0)
	{
		y = y * 10 + x % 10;
		x = x / 10;
	}
	if (num == y)
	{
		printf("是回文数");
	}
	else
	{
		printf("不是回文数");
	}
	return 0;
}