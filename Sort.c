#define _CRT_SECURE_NO_WARNINGS
//ð������
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
	printf("������%d������\n", N);
	for (i = 0; i < N; i++)
	{
		scanf("%d", &arr[i]);
	}
	printf("����ǰ�����飺\n");
	for (i = 0; i < N; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
	printf("���������飺\n");
	Bubble_sort(arr, N);
	for (i = 0; i < N; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
	return 0;
}