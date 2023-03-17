#include<stdio.h>

    int the_area(int length,int width){
        int area=length*width;
        return area;
    }
    int main(){
        int x=5;int y=6;
        int areaof=the_area(x,y);
        printf("%d\n",areaof);

          }
