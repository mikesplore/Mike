#include <stdio.h>
int main(){
long int grade1,grade2,grade3,sum;
printf("Enter grade for subject 1: ");
scanf("%d",&grade1);
printf("Enter grade for subject 2: ");
scanf("%d",&grade2);
printf("Enter grade for subject 3: ");
scanf("%d",&grade3);
sum=grade1+grade2+grade3;
printf("your total marks is %d",sum);
return 0;
}
