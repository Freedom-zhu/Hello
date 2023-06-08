#define _CRT_SECURE_NO_WARNINGS 1
#if 0
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	srand((unsigned int)time(0));
	int a[10];
	int j = 0, min;
	for (int i = 0; i < 10; i++)
	{
		a[i] = rand() % 91 + 10;
		printf("%d ", a[i]);
	}
	printf("\n");
	for (int i = 0; i < 10; i++)
	{
		min = a[j];
		if (min > a[i])
		{
			j = i;
			min = a[j];
		}
	}
	printf("最小值为%d，下标为%d", min, j + 1);
	return 0;
}
#endif