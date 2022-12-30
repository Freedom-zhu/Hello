#define _CRT_SECURE_NO_WARNINGS
#include"contact.h"

void InitContact(Contact* pc);//��ʼ��ͨѶ¼
void AddContact(Contact* pc);//�����ϵ��
void PrintCon(const Contact* pc);//��ӡͨѶ¼
void SearchCon(const Contact* pc);//������ϵ��
int FindName(const Contact* pc, char* name);//�����ֽ��в�����ϵ��
void ModifyCon(const Contact* pc);//�޸���ϵ��
void DelCon( Contact* pc);//ɾ����ϵ��

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
		printf("ͨѶ¼����\n");
	}
	printf("������������");
	scanf("%s", pc->data[pc->sz].name);
	printf("�������Ա�");
	scanf("%s", pc->data[pc->sz].sex);
	printf("���������䣺");
	scanf("%d", &(pc->data[pc->sz].age));
	printf("������绰��");
	scanf("%s", pc->data[pc->sz].tele);
	printf("�������ַ��");
	scanf("%s", pc->data[pc->sz].addr);
	pc->sz++;
	printf("��ӳɹ�\n");
}
void PrintCon(const Contact* pc)//��ӡͨѶ¼
{
	assert(pc);
	printf("%-15s %-5s %-5s %-12s %-20s\n", "����", "�Ա�", "����", "�绰", "��ַ");
	for (int i = 0; i < pc->sz; i++)
	{
		printf("%-15s %-5s %-5d %-12s %-20s\n",pc->data[i].name,pc->data[i].sex,pc->data[i].age,pc->data[i].tele,pc->data[i].addr);
	}
}
void SearchCon(const Contact* pc)
{
	assert(pc);
	char name[NAME_MAX];
	printf("������Ҫ���ҵ����֣�");
	scanf("%s\n", &name);
	int pos = FindName(pc, name);
	if (pos == -1)
	{
		printf("���޴���\n");
	}
	else
	{
		printf("%-15s %-5s %-5s %-12s %-20s\n", "����", "�Ա�", "����", "�绰", "��ַ");
		printf("%-15s %-5s %-5d %-12s %-20s\n", pc->data[pos].name, pc->data[pos].sex, pc->data[pos].age, pc->data[pos].tele, pc->data[pos].addr);
	}
}
int FindName(const Contact* pc, char* name)
{
	assert(pc && name);
	for (int i = 0; i < pc->sz; i++)
	{
		if (strcmp(pc->data[i].name, name) == 0);
		return i;//�ҵ������±�
	}
	return -1;//δ�ҵ�����-1
}
void ModifyCon(const Contact* pc)
{
	assert(pc);
	char name[NAME_MAX];
	printf("������Ҫ���ҵ����֣�");
	scanf("%s\n", &name);
	int pos = FindName(pc, name);
	if (pos == -1)
	{
		printf("���޴���\n");
	}
	else
	{
		int num = 0;
		do
		{
			printf("������Ҫ�޸ĵ���Ϣ���ͣ�");
			printf("0.�˳� 1.���� 2.�Ա� 3.���� 4.�绰 5.��ַ\n");
			scanf("%d", &num);
			switch (num)
			{
			case NAME:
				printf("�������޸ĵ����ݣ�");
				scanf("%s", pc->data[pos].name);
				break;
			case SEX:
				printf("�������޸ĵ����ݣ�");
				scanf("%s", pc->data[pos].sex);
				break;
			case AGE:
				printf("�������޸ĵ����ݣ�");
				scanf("%d", pc->data[pos].age);
				break;
			case TELE:
				printf("�������޸ĵ����ݣ�");
				scanf("%s", pc->data[pos].tele);
				break;
			case ADDR:
				printf("�������޸ĵ����ݣ�");
				scanf("%s", pc->data[pos].addr);
				break;
			case 0:
				printf("�˳�����\n");
					break;
			default:
				printf("������Ч\n");
				break;
			}
		} while (num);
	}
}
void DelCon( Contact* pc)
{
	assert(pc);
	char name[NAME_MAX];
	printf("��������Ҫɾ���û�������:>\n");
	scanf("%s", name);
	int pos = FindName(pc, name);//posΪҪѰ�ҵ��˵��±�
	if (pos == -1)
	{
		printf("���޴���\n");
	}
	else
	{
		for (int i = pos; i < pc->sz - 1; i++)
		{
			pc->data[i] = pc->data[i + 1];
		}
		pc->sz--;
		printf("ɾ���ɹ���\n");
	}
}

