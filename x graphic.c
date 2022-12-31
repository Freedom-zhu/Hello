#define _CRT_SECURE_NO_WARNINGS
//输入：5  打印如下
//*   *  *的坐标为：0.0  0.4
// * *              1.1  1.3
//  *               2.2
// * *              3.1  3.3
//*   *             4.0  4.4
#include<stdio.h>
int main()
{
	int n = 0;
	while (scanf("%d", &n) != EOF)
	{
		int i = 0;
		for (i = 0; i < n; i++)
		{
			int j = 0;
			for (j = 0; j < n; j++)
			{
				if (i == j)
					printf("*");
				else if (i + j == n - 1)
					printf("*");
				else
					printf(" ");
			}
			printf("\n");
		}
	}
	return 0;
}