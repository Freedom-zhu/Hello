#define _CRT_SECURE_NO_WARNINGS
//插入排序
#include<stdio.h>
#define N 3
void InsertSort(int *arr, int n)
{
	for (int i = 0; i<n-1; ++i)
	{
		int end = i;//记录有序序列最后一个元素下标
		int tem = arr[end + 1];//待插入的元素
		while (end >= 0)//单趟排
		{
			if (tem < arr[end])//比插入的数大就后移
			{
				arr[end + 1] = arr[end];
				end--;
		    }
			else//比插入的数小，跳出循环
			{
				break;
			}
		}
		arr[end + 1] = tem;//tem放到比插入的数小的数的后面
	}
}
int main()
{
	int i = 0;
	int arr[N] = { 5,6,2 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	printf("排序前：\n");
	for (i = 0; i < N; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
	InsertSort(arr, sz);
	printf("排序后：\n");
	for (i = 0; i < N; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
	return 0;
}
