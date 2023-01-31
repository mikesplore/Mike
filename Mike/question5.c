#include <stdio.h>
int main(){
    float k,m;
    printf("Input kilometres per hour: ");
    scanf("%f",&k);
    m=(k/1.60934);
    printf("%.6f miles per hour",m);
    return 0;

    
    }