#include<stdio.h>
int main(){
    int x[4]={2,3,4,5};
    int y[4];
    for(int i=0;i<4;i++){
    y[i]=x[i];}

    printf("the x arrays are: ");
    for(int i=0;i<sizeof(x)/sizeof(int);i++){
        printf("%d\t",x[i]);
}
printf("The y arrays are: ");
for(int i=0;i<4;i++){
    printf("%d ",y[i]);}
}