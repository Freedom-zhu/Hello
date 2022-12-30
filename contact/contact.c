#define _CRT_SECURE_NO_WARNINGS
#include"contact.h"

void InitContact(Contact* pc);//初始化通讯录
void AddContact(Contact* pc);//添加联系人
void PrintCon(const Contact* pc);//打印通讯录
void SearchCon(const Contact* pc);//查找联系人
int FindName(const Contact* pc, char* name);//按名字进行查找联系人
void ModifyCon(const Contact* pc);//修改联系人
void DelCon( Contact* pc);//删除联系人

void InitContact(Contact* pc)
{
	pc->sz = 0;
	memset(pc->data, 0, sizeof(pc->data));
}
void AddContact(Contact* pc)
{
	assert(pc);
	if (pc->sz == MAX)
	{
		printf("通讯录已满\n");
	}
	printf("请输入姓名：");
	scanf("%s", pc->data[pc->sz].name);
	printf("请输入性别：");
	scanf("%s", pc->data[pc->sz].sex);
	printf("请输入年龄：");
	scanf("%d", &(pc->data[pc->sz].age));
	printf("请输入电话：");
	scanf("%s", pc->data[pc->sz].tele);
	printf("请输入地址：");
	scanf("%s", pc->data[pc->sz].addr);
	pc->sz++;
	printf("添加成功\n");
}
void PrintCon(const Contact* pc)//打印通讯录
{
	assert(pc);
	printf("%-15s %-5s %-5s %-12s %-20s\n", "姓名", "性别", "年龄", "电话", "地址");
	for (int i = 0; i < pc->sz; i++)
	{
		printf("%-15s %-5s %-5d %-12s %-20s\n",pc->data[i].name,pc->data[i].sex,pc->data[i].age,pc->data[i].tele,pc->data[i].addr);
	}
}
void SearchCon(const Contact* pc)
{
	assert(pc);
	char name[NAME_MAX];
	printf("请输入要查找的名字：");
	scanf("%s\n", &name);
	int pos = FindName(pc, name);
	if (pos == -1)
	{
		printf("查无此人\n");
	}
	else
	{
		printf("%-15s %-5s %-5s %-12s %-20s\n", "姓名", "性别", "年龄", "电话", "地址");
		printf("%-15s %-5s %-5d %-12s %-20s\n", pc->data[pos].name, pc->data[pos].sex, pc->data[pos].age, pc->data[pos].tele, pc->data[pos].addr);
	}
}
int FindName(const Contact* pc, char* name)
{
	assert(pc && name);
	for (int i = 0; i < pc->sz; i++)
	{
		if (strcmp(pc->data[i].name, name) == 0);
		return i;//找到返回下标
	}
	return -1;//未找到返回-1
}
void ModifyCon(const Contact* pc)
{
	assert(pc);
	char name[NAME_MAX];
	printf("请输入要查找的名字：");
	scanf("%s\n", &name);
	int pos = FindName(pc, name);
	if (pos == -1)
	{
		printf("查无此人\n");
	}
	else
	{
		int num = 0;
		do
		{
			printf("请输入要修改的信息类型：");
			printf("0.退出 1.姓名 2.性别 3.年龄 4.电话 5.地址\n");
			scanf("%d", &num);
			switch (num)
			{
			case NAME:
				printf("请输入修改的数据：");
				scanf("%s", pc->data[pos].name);
				break;
			case SEX:
				printf("请输入修改的数据：");
				scanf("%s", pc->data[pos].sex);
				break;
			case AGE:
				printf("请输入修改的数据：");
				scanf("%d", pc->data[pos].age);
				break;
			case TELE:
				printf("请输入修改的数据：");
				scanf("%s", pc->data[pos].tele);
				break;
			case ADDR:
				printf("请输入修改的数据：");
				scanf("%s", pc->data[pos].addr);
				break;
			case 0:
				printf("退出程序\n");
					break;
			default:
				printf("操作无效\n");
				break;
			}
		} while (num);
	}
}
void DelCon( Contact* pc)
{
	assert(pc);
	char name[NAME_MAX];
	printf("请输入需要删除用户的名字:>\n");
	scanf("%s", name);
	int pos = FindName(pc, name);//pos为要寻找的人的下标
	if (pos == -1)
	{
		printf("查无此人\n");
	}
	else
	{
		for (int i = pos; i < pc->sz - 1; i++)
		{
			pc->data[i] = pc->data[i + 1];
		}
		pc->sz--;
		printf("删除成功！\n");
	}
}

