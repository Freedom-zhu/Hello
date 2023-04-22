#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#define N 10
// ��������ʽ��ֵ
int determinant(int matrix[N][N], int n) {
    int det = 0, submatrix[N][N];
    if (n == 2) {
        return ((matrix[0][0] * matrix[1][1]) - (matrix[1][0] * matrix[0][1]));
    }
    else {
        for (int x = 0; x < n; x++) {
            int subi = 0;
            for (int i = 1; i < n; i++) {
                int subj = 0;
                for (int j = 0; j < n; j++) {
                    if (j == x) {
                        continue;
                    }
                    submatrix[subi][subj] = matrix[i][j];
                    subj++;
                }
                subi++;
            }
            det += (x % 2 == 0 ? 1 : -1) * matrix[0][x] * determinant(submatrix, n - 1);
        }
    }
    return det;
}
int main() {
    int n;
    int matrix[N][N];
    printf("���������Ľ�����");
    scanf("%d", &n);
    printf("������%d������Ϊ%d�׾����Ԫ�أ�\n", n * n, n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    printf("���������ʽΪ��%d\n", determinant(matrix, n));
    return 0;
}

