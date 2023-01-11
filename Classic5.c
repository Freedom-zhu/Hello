#define _CRT_SECURE_NO_WARNINGS
//数字排序（三个数）
#include<stdio.h>
int main()
{
	int x, y, z, t;
	printf("请输入三个数：\n");
	scanf("%d %d %d", &x, &y, &z);
	if (x > y)
	{
		t = x;
		x = y;
		y = t;
	}
	if (x > z)
	{
		t = x;
		x = z;
		z = t;
	}
	if (y > z)
	{
		t = y;
		y = z;
		z = t;
	}
	printf("%d %d %d", x, y, z);
	return 0;
}
