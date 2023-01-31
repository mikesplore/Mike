#include <stdio.h>
  int main(){
    int a,b;
    printf("Enter two numbers separated by a comma: ");
    scanf("%d,%d",&a,&b);
    if(a==b){
        printf("Number1 and Number2 are equal");
    }
    else {
        printf("The numbers are not equal");
    }
}