#define _CRT_SECURE_NO_WARNINGS
//模拟实现qsort排序函数   可以比较字符，数字等
#include<stdio.h>
#include<string.h>
typedef struct student//定义结构体变量
{
	char name[20];
	int score;
}student;

int com_student(const void* r1, const void* r2)
{
	return strcmp((*((student**)r1))->name, (*((student**)r2))->name);
}

void swap(char* r1, char* r2, size_t width)
{
	size_t i = 0;
	for (i = 0; i < width; i++)
	{
		char temp = 0;
		temp = *r1;
		*r1 = *r2;
		*r2 = temp;
		r1++;
		r2++;
	}
}

void Myqsort(void* base, size_t num, size_t width, int (*compare)(const void* r1, const void* r2))
{
	size_t i = 0;
	size_t j = 0;
	for (i = 0; i < num - 1; i++)
	{
		for (j = 0; j < num - 1 - i; j++)
		{
			if (compare((char*)base + j * width, (char*)base + (j + 1) * width) > 0)
			{
				swap((char*)base + j * width, (char*)base + (j + 1) * width, width);
			}
		}
	}
}

int main()
{
	student wangwu = {"wangwu",75};
	student lishi = { "lishi",94 };
	student zhangsan = { "zhangsan",60 };
	student* arr_student[3] = { &zhangsan,&lishi,&wangwu };
	int i = 0;
	printf("排序前：\n");
	for (i = 0; i < 3; i++)
	{
		printf("%s %d\n", arr_student[i]->name, arr_student[i]->score);
	}
	Myqsort(arr_student, sizeof(arr_student) / sizeof(arr_student[0]), sizeof(arr_student[0]), com_student);
	printf("排序后：\n");
	for (i = 0; i < 3; i++)
	{
		printf("%s %d\n", arr_student[i]->name, arr_student[i]->score);
	}
	return 0; 
}