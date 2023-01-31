#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	float a = 9.0;
	int* q = (float*)&a;
	printf("%d\n", *q);
	*q = 10;
	float* p = q;
	printf("%f", *p);
	return 0;
}