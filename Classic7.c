#define _CRT_SECURE_NO_WARNINGS
//输出2到200之间的素数
#include<stdio.h>
int main()
{
	int i, j;
	int count = 0;
	char isPrime = 'Y';
	for (i = 3; i <= 200; i++)
	{
		isPrime = 'Y';
		for (j = 2; j < i; j++)
		{
			if (i % j == 0)
			{
				isPrime = 'N';
				break;
			}
		}
		if (isPrime == 'Y')
		{
			printf("%-4d", i);
			count++;
			if (count % 10 == 0)
			{
				printf("\n");
			}
		}
	}
	printf("\n");
	printf("一共有%d个素数", count);
	return 0;
}
