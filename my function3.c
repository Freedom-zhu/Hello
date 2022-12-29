#define _CRT_SECURE_NO_WARNINGS

//模拟实现strstr
#include<stdio.h>
#include<assert.h>
char* my_strstr(const char* p1, const char* p2)
{
	assert(p1 && p2);
	char* s1 = NULL;
	char* s2 = NULL;
	char* cur = p1;
	if (*p2 == '\0')
		return (char*)p1;//如果要找的子串为'\0'，则返回总串的首元素地址
	while(*cur)
	{
		s1 = cur;
		s2 = (char*)p2;
		while (s1 && s2 && (*s1 == *s2))//利用s1和s2进行比较cur保留比较之前的地址
		{
			s1++;
			s2++;
		}
		if (*s2 == '\0')              //当s2比较完成时返回比较之前的地址
			return (char*)cur;
		if (*s1 == '\0')              //当s1走完时还未比较完即没有子串
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
		printf("子串不存在\n");
	else
		printf("找到了 位置在:%s\n", ret);
	return 0;
}