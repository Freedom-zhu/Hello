#define _CRT_SECURE_NO_WARNINGS 1
#if 0
#include<stdio.h>
void output(int* a, int n);
void calcualte(int* a, int n);
void replace(int* a, int n);
int main()
{
	int a[10] = { 17,22,103,25,56,24,91,23,38,194 };
	output(a, 10);
	calcualte(a, 10);
	replace(a, 10);
	return 0;
}
void output(int* a, int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
}
void calcualte(int* a, int n)
{
	int sum = 0;
	for (int i = 0; i < 9; i += 2)
	{
		sum += a[i];
	}
	printf("%d\n", sum);
}
void replace(int* a, int n)
{
	for (int i = 0; i < n; i++)
	{
		if (a[i] % 2 == 0)
		{
			a[i] = a[i] / 2;
		}
		printf("%d ", a[i]);
	}
}
#endif

