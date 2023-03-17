#include<stdio.h>

void sum(int mat1[][4], int mat2[][4], int result[][4]);
void product(int mat1[][4], int mat2[][4], int result[][4]);

int main() {
    int mat1[4][4];
    int mat2[4][4];
    int result[4][4];

    printf("Enter the elements of the first matrix:\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("Element (%d,%d): ", i, j);
            scanf("%d", &mat1[i][j]);
        }
        printf("\n");
    }

    printf("Enter the elements of the second matrix:\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("Element (%d,%d): ", i, j);
            scanf("%d", &mat2[i][j]);
        }
        printf("\n");
    }

    sum(mat1, mat2, result);

    printf("Matrix sum:\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    product(mat1, mat2, result);

    printf("Matrix multiplication:\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}

void sum(int mat1[][4], int mat2[][4], int result[][4]) {
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            result[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
}

void product(int mat1[][4], int mat2[][4], int result[][4]) {
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            result[i][j] = 0;
            for (int k = 0; k < 4; k++) {
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
}
