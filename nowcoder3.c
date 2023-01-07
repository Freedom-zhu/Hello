#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

//单向循环链表
typedef struct node
{
    int data;
    struct node* next;
}node;

//创建头节点
node* add_head()
{
    node* Head = (node*)malloc(sizeof(node));
    if (Head == NULL)
        return NULL;
    Head->next = Head;
    return Head;

}

//尾插法
void add_node(node* Head, int data)
{
    node* new = (node*)malloc(sizeof(node));
    if (new == NULL)
        return;
    //节点成员赋值
    new->data = data;
    new->next = NULL;
    //链接

    node* pT = NULL;
    for (pT = Head; pT->next != Head; pT = pT->next);

    new->next = pT->next;
    pT->next = new;
}

//输出链表
void output(node* Head)
{
    if (Head->next == Head)
        return;
    node* pT = Head->next;
    while (pT != Head)
    {
        printf("%d ", pT->data);
        pT = pT->next;
    }
}

int main(void)
{
    node* Head = add_head();//头节点
    int i, j, n = 4;
    //scanf("%d", &n);
    int arr[4];

    //将键盘键入的数据存放到数组中
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    //将数据插入链表
    for (j = 0; j < n; j++)
        add_node(Head, arr[j]);
    output(Head);

    return 0;
}

