#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#define N 10
// 计算行列式的值
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
    printf("请输入矩阵的阶数：");
    scanf("%d", &n);
    printf("请输入%d个数作为%d阶矩阵的元素：\n", n * n, n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    printf("矩阵的行列式为：%d\n", determinant(matrix, n));
    return 0;
}

