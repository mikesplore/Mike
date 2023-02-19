#include<stdio.h>
int main(){
    int x,y;
    char operation;
    
    printf("Enter two numbers separated by a space: ");
    scanf("%d %d",&x,&y);
    printf("Enter operation (+,-,*,/): ");
    scanf(" %c",&operation);

    switch(operation){
        case '+':
        printf("%d + %d = %d",x,y,x+y);
        break;

        case '-':
        printf("%d - %d = %d",x,y,x-y);
        break;

        case '*':
        printf("%d * %d = %d",x,y,x*y);
        break;

        case '/':
        if(y==0){
            printf("Error division by zero.");
        }
        else{
        printf("%d/%d=%.f",x,y,(float)x/y);}
        break;

        default:
        printf("You have entered wrong operation. Try again.");
        break;

        
    }
    return 0;
   

}
