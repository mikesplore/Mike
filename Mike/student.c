#include <stdio.h>
int main(){
long int sub1,sub2,sub3,sub4,sub5,sum,mean;
    printf("\nEnter your marks in mathematics ");
    scanf("%d",sub1);
    printf("\nEnter your marks in English ");
    scanf("%d",sub2);
    printf("\nEnter your marks in kiswahili ");
    scanf("%d",sub3);
    printf("\nEnter your marks in geography ");
    scanf("%d",sub4);
    printf("\nEnter your marks in physics ");
    scanf("%d",sub5);
    sum=sub1+sub2+sub3+sub4+sub5;
    mean=sum/5;
    printf("%d %d",sum,mean);
   
    return 0;

    }
