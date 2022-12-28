#define _CRT_SECURE_NO_WARNINGS

//模拟实现srlen
#include<stdio.h>
#if 0
//1.定义整型变量进行计数
int my_strlen(char* str)
{
	int count = 0;
	while (*str++)
	{
		count++;
	}
	return count;
}

//2.采用递归的方法
int my_strlen(char* str)
{
	if (*str)
		return 1 + my_strlen(str + 1);
	else
		return 0;
}
#endif
//3.利用指针减指针的方法
int my_strlen(char* str)
{
	char* title = str;
	while (*str++)          //找到字符串的尾部
		;
	return str - 1 - title;//str指向了‘\0’之后的那个地址所以需要减一
}
int main()
{
	char arr[20] = "abcdefg";
	int ret = my_strlen(arr);
	printf("%d\n", ret);
	return 0;
}
