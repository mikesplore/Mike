#include<stdio.h>
int main(){
    int x;
    
    printf("Enter number of elements:  ");
    scanf("%d",&x);
    int arr[x];

    printf("Enter the elements:\n");
    for (int i = 0; i < x; i++) {
        printf("Element %d: ", i+1);
        scanf("%d", &arr[i]);
    }
    for(int i=0;i<x;i++){
        scanf("%d",&arr[i]);}
    
        for(int i=0;i<x;i++){
        printf("%d",arr[i]);
        }
        

}