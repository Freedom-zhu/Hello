#define _CRT_SECURE_NO_WARNINGS
//��������
#include<stdio.h>
#define N 3
void InsertSort(int *arr, int n)
{
	for (int i = 0; i<n-1; ++i)
	{
		int end = i;//��¼�����������һ��Ԫ���±�
		int tem = arr[end + 1];//�������Ԫ��
		while (end >= 0)//������
		{
			if (tem < arr[end])//�Ȳ��������ͺ���
			{
				arr[end + 1] = arr[end];
				end--;
		    }
			else//�Ȳ������С������ѭ��
			{
				break;
			}
		}
		arr[end + 1] = tem;//tem�ŵ��Ȳ������С�����ĺ���
	}
}
int main()
{
	int i = 0;
	int arr[N] = { 5,6,2 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	printf("����ǰ��\n");
	for (i = 0; i < N; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
	InsertSort(arr, sz);
	printf("�����\n");
	for (i = 0; i < N; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
	return 0;
}
