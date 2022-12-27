#define _CRT_SECURE_NO_WARNINGS
//字符串包含问题.是否为母串的子串
#include<stdio.h>
#include<string.h>

#if 0
//1.利用字符串左旋转的第一种方法加入if来解决
Check_turn_left(char arr1[], char arr2[])
{
	int len = strlen(arr1);
	for (int i = 0; i < len; i++)
	{
		char tmp = arr1[0];
		for (int j = 0; j < len - 1; j++)
		{
			arr1[j] = arr1[j + 1];
		}
		arr1[len - 1] = tmp;
		if (strcmp(arr1, arr2) == 0)
		{
			return 1;
		}
	}
	return 0;
}
#endif
//2.利用库函数解决.先在原字符串后面追加一个相同的字符串再进行比较.
int Check_turn_left(char arr1[], char arr2[])
{
	int len1 = strlen(arr1);
	int len2 = strlen(arr2);
	if (len1 != len2)
		return 0;
	strncat(arr1, arr1, len1);
	char* ret = strstr(arr1, arr2);
	if (ret == NULL)
		return 0;
	else
		return 1;
}
int main()
{
	char arr1[20] = "abcdefgh";
	char arr2[] = "cdefghab";
	int ret = Check_turn_left(arr1, arr2);
	if (ret == 1)
		printf("Yes");
	else
		printf("No");
	return 0;
}
