#define _CRT_SECURE_NO_WARNINGS

//模拟实现strlen
#include<stdio.h>
#include<assert.h>
#if 0
//1.计数器
int my_strlen(const char* str)
{
	assert(str != NULL);
	int count = 0;
	while (*str++)
	{
		count++;
	}
	return count;
}

//2.递归实现
int my_strlen(const char* str)
{
	if (*str == '\0')
		return 0;
	else
		return 1 + my_strlen(str + 1);
}
#endif
//3.利用指针减指针
int my_strlen(const char* str)
{
	char* p = str;
	while (*p)
		p++;
	return p - str;
}
int main()
{
	char* arr = "abcdeg";
	int ret = my_strlen(arr);
	printf("%d", ret);
	return 0;
}