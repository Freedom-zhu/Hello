#define _CRT_SECURE_NO_WARNINGS
//��һ���������У���С�������У���һ���������������У���֤��������԰��մ�С��������
#include<stdio.h>
int main()
{
	int i = 0;
	int arr[51] = { 0 };
	int n = 0;//��������ٸ�����������
	scanf("%d", &n);
	for ( i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	int m = 0;//���뽫Ҫ���������
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
