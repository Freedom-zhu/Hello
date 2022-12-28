#define _CRT_SECURE_NO_WARNINGS

//模拟实现 strcmp--字符串比较函数
#include<stdio.h>
#include<assert.h>
#if 0
//1.指针方式
int my_strcmp(const char* str1,const char* str2)
{
	assert(str1 && str2);   //检查指针是否合法
	while (*str1 == *str2)
	{
		if (*str1 == '\0') //判断循环是否到达'\0'
			return 0;
		str1++;
		str2++;
	}
	return (*str1 - *str2);//如果不相等则返回ASCC码值；
}
#endif
//2.数组方式
int my_strcmp(const char str1[], const char str2[])//将字符串初始化为数组形式
{
	int i;
	for ( i = 0; str1[i] == str2[i]; i++)
	{
		if (str1[i] == '\0')
			return 0;
	}
	return (str1[i] - str2[i]);
}
int main()
{
	char* str1 = "abcde";
	char* str2 = "abcde";
	int ret = my_strcmp(str1, str2);
	if (ret == 0)
		printf("相同\n");
	else
		printf("不同\n");
	return 0;
}