#define _CRT_SECURE_NO_WARNINGS
//���2��200֮�������
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
	printf("һ����%d������", count);
	return 0;
}
