#include<stdio.h>
   struct students{
        char firstName[100];
        char secondName[100];
        int age;
    };

int main(void){
 
    struct students mike={"michael","Odhiambo",20
    };

    struct students ann={"Ann","James",13};

    printf("My name is %s %s. I am %d years old\n",mike.firstName,mike.secondName,mike.age);
    printf("My name is %s %s. I am %d years old",ann.firstName,ann.secondName,ann.age);
    return 0;

}