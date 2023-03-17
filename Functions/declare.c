#include<stdio.h>
char fun();
int main(){
    char c=fun();
    printf("the character is %c",c);
}
char fun(){

    return 'b';
}