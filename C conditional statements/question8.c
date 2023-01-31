#include <stdio.h>
int main(){
    int num1,num2,num3;
    printf("Enter three numbers separated by a comma: ");
    scanf("%d,%d,%d",&num1,&num2,&num3);
    if(num1>num2 && num1>num3){
    printf("%d",num1);}
    else if(num2>num1 && num2>num3){
        printf("%d",num2);
    }
    else{
        printf("%d",num3);
    }


}