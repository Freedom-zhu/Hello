#define _CRT_SECURE_NO_WARNINGS 1
//求自然底数e
//e的计算公式为e=1+1/1!+1/2!+1/3!.....。当最后一项小于10^-10时结束
#include<stdio.h>
int main()
{
	double e = 1.0, n = 1.0;
	int i = 1;
	while (1 / n > 1e-10)
	{
		e = e + 1 / n;
		i++;
		n = n * i;
	}
	printf("e=%lf", e);
	return 0;
}