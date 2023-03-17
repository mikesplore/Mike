#include<stdio.h>
int main(){
    int mat1[4][4];
    int mat2[4][4];

        printf("Enter the elements of the first matrix:\n");
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            printf("Element (%d,%d): ",i,j);
            scanf(" %d",&mat1[i][j]);
    }
        printf("\n");
}
    printf("Enter the elements of the second matrix:\n");
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            printf("Element (%d,%d): ",i,j);
            scanf(" %d",&mat2[i][j]);

        }
        printf("\n");
}

        printf("Matrix Addition\n");

        int sum=0;
        for(int i=0;i<4;i++){
            for(int j=0;j<4;j++){
                sum=mat1[i][j]+mat2[i][j];
                printf("%d ",sum);
        }
        printf("\n");
}
return 0;
}

