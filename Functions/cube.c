#include<stdio.h>
 void cube(double x, double *result);
 int main(){
    double x,result;
    printf("Input a number: ");
    scanf("%lf",&x);
   cube(x,&result);
   printf("The cube of %.2lf is %.2lf",x,result);}

   void cube(double x, double* result){
    *result=x*x*x;
    
   }