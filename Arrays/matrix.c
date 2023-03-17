#include<stdio.h>
int main(){
    int x;
    int y;
    int sum1=0;
    int sum2=0;
    int sum3=0;
    
    printf("Enter the number of rows you need: \n");
    scanf("%d",&x);
    printf("Enter the number of columns: \n");
    scanf("%d",&y);
    int arr[x][y];
    printf("Enter the elements in the first row: \n");
    for(int i=0;i<x;i++){
        scanf("%d",&arr[0][i]);
        sum1+=arr[0][i];
        }

    printf("Enter the elements in the second row: \n");
    for(int i=0;i<y;i++){
        scanf("%d",&arr[1][i]);
        sum2+=arr[1][i];}
          printf("Enter the elements in the third row: \n");
    for(int i=0;i<y;i++){
        scanf("%d",&arr[2][i]);
        sum3+=arr[2][i];}
    printf("The matrix will be: \n");
    for(int i=0;i<x;i++){
        for(int j=0;j<y;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
printf("The sum of the values in the matrix is: %d",sum1+sum2+sum3);
}