#define _CRT_SECURE_NO_WARNINGS
//����һ����  ������ٸ����ĺ�
#include <stdio.h>
int cal(int* array, int n) {//����������͵ĺ���
    int i;
    int sum = 0;
    for (i = 0; i < n; i++) {
        sum = sum + array[i];
        //array++;//ÿ��һ����ָ��ָ���������һ��
    }
    return sum;
}
int main() {
    int n;
    int i;
    scanf("%d", &n);
    int array[100] = { 0 };
    for (i = 0; i < n; i++) {
        scanf("%d", &array[i]);//¼�������е�ÿһλ��
    }
    printf("%d", cal(array, n));//��Ϊ���鱾����һ�������ϴ����ַ�����Բ���Ҫʹ��&������žͿ���ֱ�Ӹ�ָ��
    return 0;
}