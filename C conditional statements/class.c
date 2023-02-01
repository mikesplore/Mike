#include <stdio.h>
int main(){
    //declare variables//
    char name[100],status;
    float salary,relief,basicsalary,taxableincome,grosalary,netsalary,hallowance,mallowance,callowance,tax;
    //enter personal records// 
    printf("Enter your name: ");
    fgets(name,100,stdin);
    printf("Enter your marital status whether single or married (S/M): ");
    scanf("%c",&status);

      //financial records//
    printf("Enter your salary: ");
    scanf("%f",&salary);
    printf("Enter your House Allowance, Medical Allowance and Commuter Allowance respectively separated by a space: \n");
    scanf("%f %f %f",&hallowance,&mallowance,&callowance);

    //the if statemets andd calculations


    if(status =='S'){
        relief=650;
    }
    else{
        relief = 1100;
    }
     grosalary = salary+hallowance+mallowance+callowance;
     taxableincome = grosalary-relief;
   if (taxableincome < 5000) {
        tax = 0;
    } else if (taxableincome >= 5000 && taxableincome <= 10000) {
        tax = (taxableincome - 5000) * 0.06;
    } else if (taxableincome >= 10001 && taxableincome <= 19999) {
        tax = 500 * 0.06 + (taxableincome - 10000) * 0.09;
    } else if (taxableincome >= 20000 && taxableincome <= 29999) {
        tax = 500 * 0.06 + 999 * 0.09 + (taxableincome - 19999) * 0.12;
    } else if (taxableincome >= 30000 && taxableincome <= 36999) {
        tax = 500 * 0.06 + 999 * 0.09 + 999 * 0.12 + (taxableincome - 29999) * 0.14;
    } else if (taxableincome >= 37000) {
        tax = 500 * 0.06 + 999 * 0.09 + 999 * 0.12 + 699 * 0.14 + (taxableincome - 36999) * 0.16;
    }
    netsalary=grosalary-tax;
    printf("Dear %s\nYour income tax is Ksh.%.2f and your Net Salary is Ksh.%.2f",name,tax,netsalary);
    printf("\ngrosalary is %.2f",grosalary);


    return 0;
 
   
}
