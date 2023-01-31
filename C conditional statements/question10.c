#include <stdio.h>
int main(){
    int maths,phy,chem,sum,sum1;
    printf("Input the marks obtained in Maths: ");
    scanf("%d",&maths);
    printf("Input the marks obtained in Physics: ");
    scanf("%d",&phy);
    printf("Input the marks obtained in chemistry: \n");
    scanf("%d",&chem);
    sum=maths+phy+chem;
    sum1=maths+phy;
    
    if((maths+chem+phy)>=190 || (maths+phy)>=140){
        printf("/nTotal marks in Maths,Physics and Chemistry is: %d\nTotal marks in Maths and Physics is: %d \nThe candidate is eligible for admission",sum,sum1);
    }
        else {
            printf("/nTotal marks in Maths,Physics and Chemistry is: %d\nTotal marks in Maths and Physics is: %d \nThe candidate is not eligible for admission",sum,sum1);
        }
    }
    




