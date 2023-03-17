#include <stdio.h>

int main(){
    int x;
    int sum = 0;
    printf("Enter the number of elements: ");
    scanf("%d", &x);
    int arr[x];
    for(int i=0; i<x; i++){
        printf("Enter the element %d: ", i);
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    
    printf("The even elements are: ");
    for(int i=0; i<x; i++){
        if(arr[i]%2 == 0){
            printf("%d ", arr[i]);
        }
    }
    
    printf("\nThe odd elements are: ");
    for(int i=0; i<x; i++){
        if(arr[i]%2 != 0){
            printf("%d ", arr[i]);
        }
    }
    
    printf("\nThe elements in reverse are: ");
    for(int i=x-1; i>=0; i--){
        printf("%d ", arr[i]);
    }
    
    printf("\nThe sum of the elements in the array is: %d", sum);
    
    return 0;
}
