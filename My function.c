#define _CRT_SECURE_NO_WARNINGS

//ģ��ʵ�� strcmp--�ַ����ȽϺ���
#include<stdio.h>
#include<assert.h>
#if 0
//1.ָ�뷽ʽ
int my_strcmp(const char* str1,const char* str2)
{
	assert(str1 && str2);   //���ָ���Ƿ�Ϸ�
	while (*str1 == *str2)
	{
		if (*str1 == '\0') //�ж�ѭ���Ƿ񵽴�'\0'
			return 0;
		str1++;
		str2++;
	}
	return (*str1 - *str2);//���������򷵻�ASCC��ֵ��
}
#endif
//2.���鷽ʽ
int my_strcmp(const char str1[], const char str2[])//���ַ�����ʼ��Ϊ������ʽ
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
		printf("��ͬ\n");
	else
		printf("��ͬ\n");
	return 0;
}