#define _CRT_SECURE_NO_WARNINGS
//���ظ�����
//����1��2��3��4��5�ܹ�������֣�����ɶ��ٸ������ظ�����λ��
#include<stdio.h>
int main()
{
	int i, j, k;
	int count = 0;
	for (i = 1; i <= 5; i++)
	{
		for (j = 1; j <= 5; j++)
		{
			for (k = 1; k <= 5; k++)
			{
				if (i != j && i != k && j != k)
				{
					count++;
					printf("%d%d%d  ", i, j, k);
					if (count % 10 == 0)
					{
						printf("\n");
					}
				}
			}
		}
	}
	printf("����%d�����ظ�������", count);
	return 0;
}
