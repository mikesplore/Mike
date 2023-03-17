#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int compare(const void* a, const void* b){
    int num1=*(int*)a;
    int num2=*(int*)b;
    if(num1>num2){
        return -1;
    }
    else if(num1<num2)
        return 1;
        else 
            return 0;
        
       
}

int main(){
    int arr[10];
    srand(time(NULL));
    for(int i=0;i<11;i++){
        arr[i]=rand()%11;
        }

        qsort(arr,10,sizeof(int),compare);
        for(int i=0;i<10;i++){
            printf("%d ",arr[i]);}
    

}
