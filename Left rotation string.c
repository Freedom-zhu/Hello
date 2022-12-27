#define _CRT_SECURE_NO_WARNINGS

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>

//左旋转字符串
#if 0
//1.暴力移位法
void turn_left(char arr[], int k)
{
	int len = strlen(arr);
	for (int i = 0; i < k; i++)
	{
		char tmp = arr[0];
		for (int j = 0; j < len - 1; j++)
		{
			arr[j] = arr[j + 1];
		}
		arr[len - 1] = tmp;
	}
}
#endif
//2.字符串倒序
//如“abcdef”，可以先将分成“ab”和“cdef”两部分，分别进行倒序处理成“ba”和“fedc”一起是“bafedc”
//在全部进行倒序“cdefab”
void Reverse(char* left, char* right)
{
	while (right > left)
	{
		char tmp = *left;
		*left = *right;
		*right = tmp;
		left++;
		right--;
	}
}
void turn_left(char arr[], int k)
{
	int len = strlen(arr);
	Reverse(arr, arr + k - 1);
	Reverse(arr + k, arr + len - 1);
	Reverse(arr, arr + len - 1);
}

int main()
{
	char arr[] = "ABCDEF";
	int k = 0;
	scanf("%d", &k);
	turn_left(arr, k);
	printf("%s", arr);
	return 0;
}
