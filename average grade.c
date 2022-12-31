#define _CRT_SECURE_NO_WARNINGS
//有n个成绩去除一个最大值一个最小值求平均分
#include<stdio.h>
#define n 4
int main()
{
	int sum = 0;//求和保存
	int score = 0;//读取每次的成绩
	int max = 0;//假设最高分为0
	int min = 100;//假设最低分为100
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