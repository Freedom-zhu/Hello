#define _CRT_SECURE_NO_WARNINGS 1
//浮点型的存储遵循IEEE准则
//整型的正数为普通的二进制存储
//负数存储补码（源码-->除第一位符号位全部相反-->反码-->反码加一-->补码）
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