#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
int main()
{
	char a[60] = { 0 }, b[60] = { 0 }, c[60] = { 0 };
	size_t la, lb;
	int i = 0;
	printf("input a :");
	gets(a);
	printf("input b :");
	gets(b);
	la = strlen(a);
	lb = strlen(b);
	if (la > lb)
	{
		strcpy(c, a);
	}
	else if(la==lb)
	{
		printf("error:equal string length");
		return 1;
	}
	else
	{
		strcpy(c, b);
	}
	while (c[i])
	{
		if (c[i] >= 'a' && c[i] <= 'z')
		{
			c[i] = c[i] - ('a' - 'A');
		}
		i++;
	}
	printf("%s", c);
	return 0;
}