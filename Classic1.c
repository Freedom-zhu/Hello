#define _CRT_SECURE_NO_WARNINGS
//������ 
//һ��������߶��ʹ��ұ߶���һģһ���ļ�����Ϊ������
#include<stdio.h>
int main()
{
	int num, x, y = 0;
	printf("������һ������");
	scanf("%d", &num);
	x = num;
	while (x > 0)
	{
		y = y * 10 + x % 10;
		x = x / 10;
	}
	if (num == y)
	{
		printf("�ǻ�����");
	}
	else
	{
		printf("���ǻ�����");
	}
	return 0;
}