#define _CRT_SECURE_NO_WARNINGS

//ģ��ʵ��strlen
#include<stdio.h>
#include<assert.h>
#if 0
//1.������
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

//2.�ݹ�ʵ��
int my_strlen(const char* str)
{
	if (*str == '\0')
		return 0;
	else
		return 1 + my_strlen(str + 1);
}
#endif
//3.����ָ���ָ��
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