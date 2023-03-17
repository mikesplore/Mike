#include<stdio.h>
 void circle( double radius, double* diameter, double* circumference, double* area){
    *diameter=2*radius;
    *circumference=3.142*radius;
    *area=3.142*radius*radius;
 }

 int main(){
    double radius,diameter,area,circumference;
    printf("Enter the radius of the circle: ");
    scanf("%lf",&radius);
    circle(radius,&diameter,&area,&circumference);
    printf("The diameter is %.2lf\n",diameter);
    printf("The circumference is %.2lf\n",circumference);
    printf("The area is %.2lf\n",area);
    return 0;
 }