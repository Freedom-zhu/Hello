#define _CRT_SECURE_NO_WARNINGS
//输入一个数  即求多少个数的和
#include <stdio.h>
int cal(int* array, int n) {//定义数组求和的函数
    int i;
    int sum = 0;
    for (i = 0; i < n; i++) {
        sum = sum + array[i];
        //array++;//每加一次让指针指向数组的下一项
    }
    return sum;
}
int main() {
    int n;
    int i;
    scanf("%d", &n);
    int array[100] = { 0 };
    for (i = 0; i < n; i++) {
        scanf("%d", &array[i]);//录入数组中的每一位数
    }
    printf("%d", cal(array, n));//因为数组本身在一定意义上代表地址，所以不需要使用&这个符号就可以直接给指针
    return 0;
}