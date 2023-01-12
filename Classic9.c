#define _CRT_SECURE_NO_WARNINGS
//小球自由下落
//一球从100米下落，每次落地后反跳回高度的一半，求他在第十次落地时，共经过多少米，第十次反弹多高
#include<stdio.h>
int main()
{
	float h = 100, s = 100;//第一次经过了100米
	h = h / 2;//第一次反弹的高度
	for (int i = 2; i <= 10; i++)
	{
		s = s + 2 * h;
		h = h / 2;
	}
	printf("第十次落地时，共经过%f米，第十次反弹的高度为%f米", s, h);
	return 0;
}
