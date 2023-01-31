#include<stdio.h>
int main(){
char name[100],name1[100],name2[100];
printf("Please enter your first name\t");
scanf("%s",name);
printf("Please enter your second name\t");
scanf("%s",name1);
printf("Please enter your last name\t");
scanf("%s",name2);
printf("\nYour sir name will be: %s",name);
printf("\nYour full name will be:%s %s %s",name,name1,name2);
printf("\nI will now be calling you by your second name, \nHello %s!",name1);
char grade[1];
printf("\nPlease enter your grade in your last exam");
scanf("%s",grade);
printf("\n Dear %s, You scored %s in your last Exam!",name1,grade);
return 0;
}
