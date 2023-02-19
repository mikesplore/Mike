#include<stdio.h>
int main(){
    float x,y;
    char operation;    
    printf("Enter two numbers separated by a comma: ");
    scanf("%f,%f",&x,&y);
    printf("Enter operation (+,-,*,/): ");
    scanf(" %c",&operation);

    switch(operation){
        case '+':
        printf("%.4f + %.4f = %.4f",x,y,x+y);
        break;

        case '-':
        printf("%.4f - %.4f = %.4f",x,y,x-y);
        break;

        case '*':
        printf("%.4f* %.4f = %.4f",x,y,x*y);
        break;

        case '/':
        if(y==0){
            printf("Error division by zero.");
        }
        else{
        printf("%.4f/%.4f=%.4f",x,y,x/y);}
        break;
        
        

        default:
        printf("You have entered wrong operation. Try again.");
        break;

        
    }
    return 0;
   

}