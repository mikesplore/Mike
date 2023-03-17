#include<stdio.h>
#include<stdlib.h>


void add(int x,int y){
    x+=2;
    y+=2;
    printf(" %d, %d Inside the function\n",x,y);
}

int main(){
    int x=5;
    int y=6;
    add(x,y);
    printf("%d,%d Inside the main",x,y);
}