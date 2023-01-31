#include <stdio.h>
int main(){
    float Centigrade,Fahrenheit;
    printf("enter temperature in Centigrade ");
    scanf("%f",&Centigrade);
    Fahrenheit=(Centigrade*9/5+32);
    
    printf("The temperature in farenheit is:%.6f ",Fahrenheit);
    return 0;

}