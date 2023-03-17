#include<stdio.h>
int main(){
    int x;
    printf("Input the number of elements: ");
    scanf("%d",&x);
    int arr[x];
    printf("Enter %d elements in the array: \n",x);
    for(int i=0;i<x;i++){
        printf("Element-%d: ",i);
        scanf("%d",&arr[i]);
}       printf("The elements are:\n");
    for(int i=0;i<x;i++){
        
        printf("%d ",arr[i]);
    }
    printf("\nThe elemetnts in reverse are: \n");
    for(int i=x-1;i>=0;i--){
        printf("%d ",arr[i]);
}}