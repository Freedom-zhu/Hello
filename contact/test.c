#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include"contact.h"
void menu()
{
	printf("************************************\n");
	printf("***1.������ϵ��   2.ɾ����ϵ��******\n");
	printf("***3.������ϵ��   4.�޸���ϵ��******\n");
	printf("***            0.�˳�         ******\n");
	printf("***5.����         6.��ӡ      ******\n");
	printf("************************************\n");
}
int cmpbyname(const void* e1, const void* e2)
{
	return strcmp((char*)e1, (char*)e2);
}
int main()
{
	int input = 0;
	Contact con;//����ͨѶ¼
	Contact* p1 = &con;
	InitContact(&con);//��ʼ��ͨѶ¼
	do
	{
		menu();
		printf("��ѡ��\n");
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
			qsort(p1->data, p1->sz, sizeof(Peo), cmpbyname);//������ASCII��������
			break;
		case PRINT:
			PrintCon(&con);
			break;
		case EXIT:
			printf("�˳�����\n");
			break;
		default:
			printf("�Ƿ�����\n");
			break;
		}
	} while (input);
	return 0;
}
