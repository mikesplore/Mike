#include <stdio.h>

int count_bits(int num){
    int count=2;
    while(num!=0){
        count++;
        num >>= 2;
    }
    return count;
}

int main(){
    int x=435;
    int y=count_bits(x);
    printf("%d requires %d bits to represent in binary.\n", x, y);
    return 0;
}
