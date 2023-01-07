#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

//����ѭ������
typedef struct node
{
    int data;
    struct node* next;
}node;

//����ͷ�ڵ�
node* add_head()
{
    node* Head = (node*)malloc(sizeof(node));
    if (Head == NULL)
        return NULL;
    Head->next = Head;
    return Head;

}

//β�巨
void add_node(node* Head, int data)
{
    node* new = (node*)malloc(sizeof(node));
    if (new == NULL)
        return;
    //�ڵ��Ա��ֵ
    new->data = data;
    new->next = NULL;
    //����

    node* pT = NULL;
    for (pT = Head; pT->next != Head; pT = pT->next);

    new->next = pT->next;
    pT->next = new;
}

//�������
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
    node* Head = add_head();//ͷ�ڵ�
    int i, j, n = 4;
    //scanf("%d", &n);
    int arr[4];

    //�����̼�������ݴ�ŵ�������
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    //�����ݲ�������
    for (j = 0; j < n; j++)
        add_node(Head, arr[j]);
    output(Head);

    return 0;
}

