#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
int main(void)
{
    char str[30] = { 0 };
    char ch;
    int i = 0, j = 0;
    int m;
    //获取键盘输入的字符串
    while ((ch = getchar()) != '\n')
    {
        str[i] = ch;
        i++;
    }
    scanf("%d", &m);
    for (j = m - 1; j < i; j++)
        printf("%c", str[j]);
    return 0;
}