#define _CRT_SECURE_NO_WARNINGS 1
//�����͵Ĵ洢��ѭIEEE׼��
//���͵�����Ϊ��ͨ�Ķ����ƴ洢
//�����洢���루Դ��-->����һλ����λȫ���෴-->����-->�����һ-->���룩
#include<stdio.h>
int main()
{
	float a = 9.0;
	int* q = (float*)&a;
	printf("%d\n", *q);
	*q = 10;
	float* p = q;
	printf("%f", *p);
	return 0;
}