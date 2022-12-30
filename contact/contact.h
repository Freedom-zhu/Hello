#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<cassert>
#include<stdlib.h>
#define NAME_MAX 20//姓名长度
#define SEX_MAX 10//性别长度
#define TELE_MAX 12//电话号码长度
#define ADDR_MAX 20//地址长度
#define MAX 100//通讯录大小
enum Option//菜单使用
{
	EXIT,//0
	ADD,//1
	DEL,//2
	SEARCH,
	MODIFY,
	SORT,
	PRINT
};
enum Con//修改联系人函数用到
{
	ERRO,
	NAME,
	SEX,
	AGE,
	TELE,
	ADDR
};
//类型定义
typedef struct Peoinfo
{
	char name[NAME_MAX];
	char sex[SEX_MAX];
	int age;
	char tele[TELE_MAX];
	char addr[ADDR_MAX];
}Peo;
//通讯录
typedef struct Contact
{
	Peo data[MAX];
	int sz;
}Contact;
