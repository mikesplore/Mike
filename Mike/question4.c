#include<stdio.h>
int main(){
    float length,width,perimeter,area;
    printf("input the length of the rectangle\n ");
    scanf("%f",&length);
    printf("input the width of the rectangle \n");    
    scanf("%f",&width);
    perimeter = 2*(length+width);
    area=length*width;
    printf("Perimeter of the Rectangle:%.6f\n",perimeter);
    printf("Area of the Rectangle:%.6f",area);







    

}