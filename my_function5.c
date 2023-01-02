#define _CRT_SECURE_NO_WARNINGS
//ģ��ʵ��memmove
//���Ǹ��ǿ�������
#include<stdio.h>
#include<assert.h>
void* my_memmove(void* dest, const void* src, int count)
{
	assert(dest && src);
	void* ret = dest;
	if (src > dest)//˳˳��
	{
		while (count--)
		{
			*(char*)dest = *(char*)src;
			dest = (char*)dest + 1;
			src = (char*)src + 1;
		}
	}
	else
	{
		//��˳��
		while (count--)
		{
			*((char*)dest + count) = *((char*)src + count);
		}
	}
	return ret;
}
int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	my_memmove(arr + 1, arr + 4, 20);
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}
