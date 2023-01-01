#define _CRT_SECURE_NO_WARNINGS
//选择排序
#include<stdio.h>
#define N 3
void Selectsort(int a[], int n)
{
	int i, j;
	int min = 0;
	for (i = 0; i < n - 1; i++)
	{
		min = i;
		for (j = i + 1; j < n; j++)
		{
			if (a[j] < a[min])
			{
				min = j;
			}
		}
		if (min != i)
		{
			int tem = a[i];
			a[i] = a[min];
			a[min] = tem;
		}
	}
}
int main()
{
	int a[N];
	int i = 0;
	printf("请输入%d个数：\n", N);
	for (i = 0; i < N; i++)
	{
		scanf("%d", &a[i]);
	}
	Selectsort(a, N);
	for (i = 0; i < N; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
	return 0;
}
