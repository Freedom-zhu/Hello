#define _CRT_SECURE_NO_WARNINGS
//��n���ɼ�ȥ��һ�����ֵһ����Сֵ��ƽ����
#include<stdio.h>
#define n 4
int main()
{
	int sum = 0;//��ͱ���
	int score = 0;//��ȡÿ�εĳɼ�
	int max = 0;//������߷�Ϊ0
	int min = 100;//������ͷ�Ϊ100
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &score);
		sum += score;
		if (score > max)
			max = score;
		if (score < min)
			min = score;
	}
	printf("%.2f", (sum - max - min)*1.0 / (n - 2.0));
	return 0;
}