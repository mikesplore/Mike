#include<stdio.h>

    int the_area(int,int);


    int main(){
        int x=5,y=6;
        int areaof=the_area(x,y);
        printf("%d\n",areaof);

          }

     int the_area(int length,int width){
     int thearea;
     thearea=length*width;
     return thearea;
    }      