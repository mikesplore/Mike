#include<stdio.h>
 int even_odd(int *x);
 int main(){
    int x;
    printf("Input a number: ");
    scanf("%d",&x);
    even_odd(&x);
    
 }
     int even_odd(int* x){
        if(*x%2==0)
        printf("%d is even\n",*x);
        else
        printf("%d is odd\n",*x);
     }

