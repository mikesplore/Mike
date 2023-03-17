#include<stdio.h>
#include<ctype.h>
int main(){
    char ch;
    printf("input a character: ");
    scanf("%c",&ch);

    if(isalpha(ch)){
    printf("This is a charcter.");
    }

    else if(isdigit(ch)){
        printf("This is a digit.");
        }
    
    else{
        printf("This is a special Character.");
    }
}
  