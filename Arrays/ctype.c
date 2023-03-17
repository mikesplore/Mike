#include<stdio.h>
#include<ctype.h>
int main(){
    char x;
    printf("Enter a character: ");
    scanf("%c",&x);
    if(isalpha(x)){
    printf("%c is an alphabetic character\n",x);}
    else if(isdigit(x)){
    printf("%c is a digit",x);}
    else {
        printf("%c is a special character",x);
    }}
