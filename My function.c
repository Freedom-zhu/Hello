#define _CRT_SECURE_NO_WARNINGS

//ģ��ʵ��srlen
#include<stdio.h>
#if 0
//1.�������ͱ������м���
int my_strlen(char* str)
{
	int count = 0;
	while (*str++)
	{
		count++;
	}
	return count;
}

//2.���õݹ�ķ���
int my_strlen(char* str)
{
	if (*str)
		return 1 + my_strlen(str + 1);
	else
		return 0;
}
#endif
//3.����ָ���ָ��ķ���
int my_strlen(char* str)
{
	char* title = str;
	while (*str++)          //�ҵ��ַ�����β��
		;
	return str - 1 - title;//strָ���ˡ�\0��֮����Ǹ���ַ������Ҫ��һ
}
int main()
{
	char arr[20] = "abcdefg";
	int ret = my_strlen(arr);
	printf("%d\n", ret);
	return 0;
}
