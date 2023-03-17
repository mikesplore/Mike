#include<stdio.h>
int main(){
    int x,y;
    printf("Enter the number of elements to be stored in the frst array: ");
    scanf("%d",&x);
    int arr[x];
    printf("Input %d elements in the array:\n",x);
    for(int i=0;i<x;i++){
        printf("Element-%d: ",i);
        scanf("%d",&arr[i]);}

    printf("Enter the number of elements in the second array: \n");
    scanf("%d",&y);
    int arr2[y];
    printf("\nInput %d elements in the array:\n",y);
    for(int i=0;i<y;i++){
        printf("Element-%d: ",i);
        scanf("%d",&arr2[i]);
}   printf("the merged arrays is: \n");
    for(int i=0;i<x;i++){
        for(int j=0;j<y;j++){
            printf("%d%d",arr[i],arr2[j]);
}
}}