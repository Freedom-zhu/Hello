#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include"contact.h"
void menu()
{
	printf("************************************\n");
	printf("***1.增加联系人   2.删除联系人******\n");
	printf("***3.查找联系人   4.修改联系人******\n");
	printf("***            0.退出         ******\n");
	printf("***5.排序         6.打印      ******\n");
	printf("************************************\n");
}
int cmpbyname(const void* e1, const void* e2)
{
	return strcmp((char*)e1, (char*)e2);
}
int main()
{
	int input = 0;
	Contact con;//创建通讯录
	Contact* p1 = &con;
	InitContact(&con);//初始化通讯录
	do
	{
		menu();
		printf("请选择：\n");
		scanf("%d", &input);
		switch (input)
		{
		case ADD:
			AddContact(&con);
			break;
		case DEL:
			DelCon(&con);
			break;
		case SEARCH:
			SearchCon(&con);
			break;
		case MODIFY:
			ModifyCon(&con);
			break;
		case SORT:
			qsort(p1->data, p1->sz, sizeof(Peo), cmpbyname);//按名字ASCII进行排序
			break;
		case PRINT:
			PrintCon(&con);
			break;
		case EXIT:
			printf("退出程序\n");
			break;
		default:
			printf("非法输入\n");
			break;
		}
	} while (input);
	return 0;
}
