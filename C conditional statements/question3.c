#include <stdio.h>
int main(){
    int number;
    printf("Enter a number: ");
    scanf("%d",&number);
    if(number>0){
        printf("%d is a positive number",number);

    }
    else{
        printf("%d is a negative number",number);
    }
}