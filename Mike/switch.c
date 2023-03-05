#include <stdio.h>
#include <stdlib.h>
int compare(const void* a, const void* b){
    int num1=*(int*) a;
    int num2=*(int*) b;
    if(num1>num2)
    return 1;
    else if(num1<num2)
    return -1;
    else
    return 0;
}
int main(){
int x;
printf("Enter the number of elements to be stored in the array: ");
scanf("%d",&x);
int arr[x];
printf("Enter the elements of the array: \n");
for(int i=0;i<x;i++){
    printf("Element-%d: ",i);
    scanf("%d",&arr[i]);}
    printf("\nThe elements of the array are: ");
    qsort(arr,x,sizeof(int),compare);
    for(int i=0;i<x;i++){
    printf("%d ",arr[i]);}
}

