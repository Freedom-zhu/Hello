#define _CRT_SECURE_NO_WARNINGS

//ģ��ʵ��strcpy
#include<stdio.h>
#include<assert.h>
////1.��������Ϊvoid��
//void my_strcpy(char* dest, const char* src)
//{
//	assert(dest && src);
//	while (*dest++ = *src++)
//		;
//}
//2.��������Ϊָ����
char* my_strcpy(char* dest, const char* src)
{
	assert(dest && src);
	char* ret = dest;
	while (*ret++ = *src++)
		;
	return dest;
}
int main()
{
	char str[20] = { 0 };
	char* p = "hello";
	my_strcpy(str, p);
	printf("%s\n", str);
	return 0;
}
