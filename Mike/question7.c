#include <stdio.h>
int main(){
    int a,b,c;
    printf("Input two angle of a triangle separated by a comma ");
    scanf("%d,%d",&a,&b);
    c=(180-a-b);
    printf("The third angle of the triangle: %d",c);
    return 0;
}