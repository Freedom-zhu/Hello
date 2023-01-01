#define _CRT_SECURE_NO_WARNINGS
//有一个有序数列，从小到大排列，将一个新数插入数列中，保证插入后数仍按照从小到大排列
#include<stdio.h>
int main()
{
	int i = 0;
	int arr[51] = { 0 };
	int n = 0;//将输入多少个数进行排列
	scanf("%d", &n);
	for ( i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	int m = 0;//输入将要插入的数据
	scanf("%d", &m);
	for ( i = n - 1; i >= 0; i--)
	{
		if (arr[i] > m)
		{
			arr[i + 1] = arr[i];
		}
		else
		{
			arr[i + 1] = m;
			break;
		}
	}
	if (i < 0)
	{
		arr[0] = m;
	}
	for ( i = 0; i < n + 1; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}
