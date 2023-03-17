#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int getnumbe(int y){
    int x=rand()%y+1;
    return x;

}

int main(){
    srand(time(NULL));
    int num=getnumbe(100);
    printf("The random number is: %d\n",num);
}