#define _CRT_SECURE_NO_WARNINGS
//冒泡排序
#include<stdio.h>
#define N 3
void Bubble_sort(int arr[], int size)
{
	int j, i, tem;
	for (i = 0; i < size - 1; i++)
	{
		for (j = 0; j < size - 1 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				tem = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tem;
			}
		}
	}
}
int main()
{
	int arr[N];
	int i;
	printf("请输入%d个数：\n", N);
	for (i = 0; i < N; i++)
	{
		scanf("%d", &arr[i]);
	}
	printf("排序前的数组：\n");
	for (i = 0; i < N; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
	printf("排序后的数组：\n");
	Bubble_sort(arr, N);
	for (i = 0; i < N; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
	return 0;
}