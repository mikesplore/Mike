#include<stdio.h>
int main(){
float radius,volume;
float pie=22/7;
printf("Enter the radius of the sphere ");
scanf("%f",&radius);
volume=((4/3)*radius*radius*radius*pie);
printf("the volume of the sphere is %.6f",volume);
return 0;

}