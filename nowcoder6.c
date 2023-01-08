#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include<stdlib.h>
//#define N 10
//typedef struct Book {
//    char name[100];
//    int price;
//}BOOK;
//int cmp_by_price(const void* e1, const void* e2)
//{
//    return ((BOOK*)e1)->price - ((BOOK*)e2)->price;
//}
//int main()
//{
//    int n = 0;
//   /* scanf("%d", &n);//c语言不允许这样定义arr[n]中的n必须为常量不能为变量
//    BOOK arr[n];*/
//    for (int i = 0; i < n; i++)
//    {
//        scanf("%s %d", &arr[i].name, &arr[i].price);
//    }
//    int sz = sizeof(arr) / sizeof(arr[0]);
//    qsort(arr, sz, sizeof(arr[0]), cmp_by_price);//快排
//    for (int i = 0; i < n; i++)
//    {
//        printf("%s\n", arr[i].name);
//    }
//    return 0;
//}

#include <stdio.h>
#include <string.h>
typedef struct book {
    char name[100];
    int price;
}book;
int main()
{
    int n;
    scanf("%d", &n);
    book book[100];
    for (int i = 0; i < n; i++)
    {
        scanf("%s %d", &(book[i].name), &(book[i].price));
    }
    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            if (book[j].price > book[j + 1].price)
            {
                char a[100] = "\0";
                strcpy(a, book[j].name);
                strcpy(book[j].name, book[j + 1].name);
                strcpy(book[j + 1].name, a);
                int temp = book[j].price;
                book[j].price = book[j + 1].price;
                book[j + 1].price = temp;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        printf("%s\n", book[i].name);
    }
    return 0;
}