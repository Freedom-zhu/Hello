#define _CRT_SECURE_NO_WARNINGS
//汉诺塔
#include<stdio.h>

void move(char from, int n, char to)
{
	static int k = 1;
	printf("%2d:%3d # %c---%c\n", k, n, from, to);
	if (k++ % 3 == 0)
	{
		printf("\n");
	}
}

void hanoi(int n, char a, char b, char c)
{
	if (n == 1)
	{
		move(a, 1, c);
	}
	else
	{
		hanoi(n - 1, a, c, b );//剩下n-1个盘子从A借助C移到B
		move(a, n, c);//将第n个盘子从A移到C
		hanoi(n - 1, b, a, c);//再将n-1个盘子从B借助A移到c
	}
}

int main()
{
	int n;
	printf("请输入盘子的数量");
	scanf("%d", &n);
	printf("\n");
	hanoi(n, 'A', 'B', 'C');
	return 0;
}
