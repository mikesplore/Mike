#include<stdio.h>
int var(int *x,int *y){
    *x=7;
    *y=9;
}
int main(){
    int x=3;
    int y=7;
    var(&x,&y);
    printf("x=%d, y=%d",x,y);}