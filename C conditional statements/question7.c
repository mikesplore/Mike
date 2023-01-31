#include <stdio.h>
int main(){
float height;
int category;
printf("Enter your height: ");
scanf("%f",&height);
if(height>=170 && height<=190){
    printf("The person is tall");
}
else if(height>=150 && height<=169){
    printf("The person is average");
}
else{
    printf("The person is Dwarf");
}
return 0;
}