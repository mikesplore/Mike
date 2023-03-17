#include<stdio.h>
int sum(int x,int y){
 x=4;
 y=8;
}
int main(){
    int x=10,y=20;
    sum(x,y);
    printf("%d %d",x,y);
}