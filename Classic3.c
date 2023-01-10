#define _CRT_SECURE_NO_WARNINGS
//无重复数字
//给定1、2、3、4、5总共五个数字，能组成多少个互不重复的三位数
#include<stdio.h>
int main()
{
	int i, j, k;
	int count = 0;
	for (i = 1; i <= 5; i++)
	{
		for (j = 1; j <= 5; j++)
		{
			for (k = 1; k <= 5; k++)
			{
				if (i != j && i != k && j != k)
				{
					count++;
					printf("%d%d%d  ", i, j, k);
					if (count % 10 == 0)
					{
						printf("\n");
					}
				}
			}
		}
	}
	printf("共有%d个不重复的数字", count);
	return 0;
}
