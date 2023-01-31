#include <stdio.h>
int main(){
    int rollno,physics,chemistry,compA,sum;
    float percentage;
    char name[100];
    printf("Input the Roll number of the student: ");
    scanf("%d",&rollno);
    getchar();
    printf("Input the name of the student: ");
    fgets(name,100,stdin);
    printf("Input the marks of Physics,Chemistry and Computer Application: ");
    scanf("%d %d %d",&physics,&chemistry,&compA);
    sum=physics+chemistry+compA;
    percentage=sum/3;

    
    if(percentage>=80 && percentage<=100){

   printf("Roll No: %d\nName of Student: %sMarks in Physics: %d\nMarks in Chemistry: %d\nMarks in Computer Application: %d\nTotal Marks: %d\nPercentage: %.2f\nDivision = First",rollno,name,physics,chemistry,compA,sum,percentage);
    }
    else if(percentage>=60 && percentage<=79){

        printf("Roll No: %d\nName of Student: %s\nMarks in Physics: %d\nMarks in Chemistry: %d\nMarks in Computer Application: %d\nTotal Marks: %d\nPercentage: %.2f\nDivision = Second",rollno,name,physics,chemistry,compA,sum,percentage);
    }
    else {
        printf("Roll No: %d\nName of Student: %s\nMarks in Physics: %d\nMarks in Chemistry: %d\nMarks in Computer Application: %d\nTotal Marks: %d\nPercentage: %.2f\nDivision = Last",rollno,name,physics,chemistry,compA,sum,percentage);
    }

}