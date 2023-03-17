#include <stdio.h>

int main() {
    int x, y, sum = 0, difference = 0, product = 1, quotient = 1;
    char z;
 
    printf("HELLO AND WELCOME TO THE MATRIX CALCULATOR\nWe will assume the sizes of the matrices are the same.\n");
    printf("Enter the number of rows and column of the matrix(x,y):\n");
    scanf("%d %d", &x, &y);

    int mat1[x][y], mat2[x][y];

    printf("Enter the elements of the first matrix:\n");
    for(int i = 0; i < x; i++) {
        for(int j = 0; j < y; j++) {
            scanf("%d", &mat1[i][j]);
        }
    }

    printf("Enter the elements of the second matrix:\n");
    for(int i = 0; i < x; i++) {
        for(int j = 0; j < y; j++) {
            scanf("%d", &mat2[i][j]);
        }
    }  
       
    printf("Enter the operation you want to perform:\n1.+\n2.-\n3.*\n4./\n");
    scanf(" %c", &z);

    switch(z) {
        case '1':
            for(int i = 0; i < x; i++) {
                for(int j = 0; j < y; j++) {
                    sum = mat1[i][j] + mat2[i][j];
                    printf("%d ", sum);
                }
                printf("\n");
            }
            break;

        case '2':
            for(int i = 0; i < x; i++) {
                for(int j = 0; j < y; j++) {
                    difference = mat1[i][j] - mat2[i][j];
                    printf("%d ", difference);
                }
                printf("\n");
            }
            break;

        case '3':
            for(int i = 0; i < x; i++) {
                for(int j = 0; j < y; j++) {
                    product = mat1[i][j] * mat2[i][j];
                    printf("%d ", product);
                }
                printf("\n");
            }
            break;

        case '4':
            for(int i = 0; i < x; i++) {
                for(int j = 0; j < y; j++) {
                    quotient = mat1[i][j] / mat2[i][j];
                    printf("%d ", quotient);
                }
                printf("\n");
            }
            break;

        default:
            printf("Please input a valid operation");
    }}