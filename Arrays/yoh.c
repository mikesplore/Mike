#include<stdio.h>
#include<ctype.h>
int main(){
    char x;
    printf("Enter a character: ");
    scanf(" %c",&x);
    if(isalpha(x)){
    printf("The input is a character.",x);}
    else if(isdigit(x)){
        printf("The input is a digit",x);
            }
    else{
        printf("the input is a special character");
    }    
}