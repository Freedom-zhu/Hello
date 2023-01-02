#define _CRT_SECURE_NO_WARNINGS
//ģ��ʵ��memcpy����
//memcpy��һ������Ϊvoid*��ָ��ָ��Ŀ�Ŀռ�
//      �ڶ�������Ϊvoid*��ָ��ָ���ȡ�ռ�
//      ����������Ϊsize��tΪ��ȡ�Ĵ�С��λ���ֽ�
#include<stdio.h>
#include<assert.h>
void my_memcpy(void* str1, const void* str2, size_t sz)
{
	while (sz--)
	{
		assert(str1 && str2);
		*(char*)str1 = *(char*)str2;
		((char*)str1)++;
		((char*)str2)++;
	}
}
int main()
{
	int arr1[5] = { 1,2,3,4,5 };
	int arr2[5] = { 6,7,8,9,10 };
	my_memcpy(arr1, arr2, 4);
	for (int i = 0; i < 5; i++)
	{
		printf("%d ", arr1[i]);
	}
	return 0;
}