#include <stdio.h>
int main(){
    //declare variables//
    char name[100],status;
    float salary,relief,basicsalary,taxableincome,grosalary,netsalary,hallowance,mallowance,callowance,tax;
    //enter personal records// 
    printf("Enter your name: ");
    fgets(name,100,stdin);
    printf("Enter your marital status single or married (S/M): ");
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
    if(taxableincome<5000){
        tax=taxableincome*0;
    }
    else if(taxableincome>=5000 && taxableincome<=10000){
        tax=taxableincome*0.06;
    }
    else if(taxableincome>=10001 && taxableincome<=19999){
        tax=taxableincome*0.09;
    }
    else if(taxableincome>=20000 && taxableincome<=29999){
        tax=taxableincome*0.12;
    }
    else if(taxableincome>=30000 && taxableincome<=36999){
        tax = taxableincome*0.14;
    }
    else{
        tax = taxableincome*0.16;
    }
    netsalary=grosalary-tax;
    printf("Dear %s\nYour income tax is Ksh.%.2f and your Net Salary is Ksh.%.2f",name,tax,netsalary);


    return 0;

   
}
