#define _CRT_SECURE_NO_WARNINGS
//�ú�������ʵ���������������
#include<stdio.h>
float Add(float a, float b)
{
	return a + b;
}
float Sub(float a, float b)
{
	return a - b;
}
float Mul(float a, float b)
{
	return a * b;
}
float Div(float a, float b)
{
	return a * 1.0 / b;
}
int main()
{
	int input = 0;
	float ret = 0;
	float a = 0;
	float b = 0;
	float (*pfArr[5])(float, float) = { NULL,Add,Sub,Mul,Div };//������������
	do
	{
		printf("*********************************\n");
		printf("***1.add    2.sub       *********\n");
		printf("***3.mul    4.div       *********\n");
		printf("********0.exit     **************\n");
		printf("*********************************\n");
		printf("��ѡ��\n");
		scanf("%d", &input);
		if (input >= 1 && input <= 4)
		{
			printf("������������������\n");
			scanf("%f %f", &a, &b);
			ret = (pfArr[input])(a, b);
			printf("ret=%.2f\n", ret);
		}
		else if (input == 0)
			printf("�˳�����\n");
		else
			printf("�������\n");
	} while (input);
	return 0;
}