#include <stdio.h>
int main(){
    int temp;
    printf("Enter temperature: ");
    scanf("%d",&temp);
    if(temp>=40){
        printf("Its Very Hot");
    }
    else if(temp>=30 && temp<40){

        printf("Its Hot");
    }
    else if(temp>=20 && temp<30){
        printf("Normal in Temp");
    }
    else if(temp>=10 && temp<20){
        printf("Cold Weather");
    }
    else if(temp>=0 && temp<10){
        printf("Very Cold Weather");
    }
    else {
        printf("Freezing weather");
    }

}