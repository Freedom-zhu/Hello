#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<cassert>
#include<stdlib.h>
#define NAME_MAX 20//��������
#define SEX_MAX 10//�Ա𳤶�
#define TELE_MAX 12//�绰���볤��
#define ADDR_MAX 20//��ַ����
#define MAX 100//ͨѶ¼��С
enum Option//�˵�ʹ��
{
	EXIT,//0
	ADD,//1
	DEL,//2
	SEARCH,
	MODIFY,
	SORT,
	PRINT
};
enum Con//�޸���ϵ�˺����õ�
{
	ERRO,
	NAME,
	SEX,
	AGE,
	TELE,
	ADDR
};
//���Ͷ���
typedef struct Peoinfo
{
	char name[NAME_MAX];
	char sex[SEX_MAX];
	int age;
	char tele[TELE_MAX];
	char addr[ADDR_MAX];
}Peo;
//ͨѶ¼
typedef struct Contact
{
	Peo data[MAX];
	int sz;
}Contact;
