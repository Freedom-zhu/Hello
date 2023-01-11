#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

void revers(char* s)
{
	int len = 0;
	char* p = s;
	while (*p)//获取字符串长度
	{
		len++;
		p++;
	}
	int i = 0;
	char c;
	while (i <= len / 2 - 1)
	{
		c = *(s + i);
		*(s + i) = *(s + len - 1 - i);
		*(s + len - 1 - i) = c;
		i++;
	}
}
int main()
{
	char s[] = "helloworld";
	printf("翻转前：%s\n", s);
	revers(s);
	printf("翻转后：%s\n", s);
	return 0;
}
