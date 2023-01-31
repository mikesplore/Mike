#include <stdio.h>
int main(){
    int m,hours,minutes;
    printf("Input minutes: ");
    scanf("%d",&m);
    hours=m/60;
    minutes=m%60;
    printf("%d Hours, %d Minutes",hours,minutes);
    return 0;
        
}