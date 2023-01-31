#include <stdio.h>
int main(){
    int a,b,sum,difference,product;
    float quotient;
    printf("Input any two numbers separated by comma: ");
    scanf("%d,%d",&a,&b);
    sum=a+b;
    difference=a-b;
    product=a*b;
    quotient=a/b;
    printf("The sum of the given numbers is: %d\n",sum);
    printf("The difference of the given numbers is: %d\n",difference);
    printf("The product of the given numbers is: %d\n",product);
    printf("The quotient of the given numbers is: %.6f",quotient);
    return 0;
}