#define _CRT_SECURE_NO_WARNINGS

//ģ��ʵ��strstr
#include<stdio.h>
#include<assert.h>
char* my_strstr(const char* p1, const char* p2)
{
	assert(p1 && p2);
	char* s1 = NULL;
	char* s2 = NULL;
	char* cur = p1;
	if (*p2 == '\0')
		return (char*)p1;//���Ҫ�ҵ��Ӵ�Ϊ'\0'���򷵻��ܴ�����Ԫ�ص�ַ
	while(*cur)
	{
		s1 = cur;
		s2 = (char*)p2;
		while (s1 && s2 && (*s1 == *s2))//����s1��s2���бȽ�cur�����Ƚ�֮ǰ�ĵ�ַ
		{
			s1++;
			s2++;
		}
		if (*s2 == '\0')              //��s2�Ƚ����ʱ���رȽ�֮ǰ�ĵ�ַ
			return (char*)cur;
		if (*s1 == '\0')              //��s1����ʱ��δ�Ƚ��꼴û���Ӵ�
			return NULL;
		cur++;
	}
	return NULL;
}
int main()
{
	char* arr1 = "abbbcdefg";
	char* arr2 = "bbcg";
	char* ret = my_strstr(arr1, arr2);
	if (ret == NULL)
		printf("�Ӵ�������\n");
	else
		printf("�ҵ��� λ����:%s\n", ret);
	return 0;
}