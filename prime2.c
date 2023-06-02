#include<stdio.h>
int main(){
    int num;
    printf("enter the value number:");
    scanf("%d",&num);
    int checkPrime=1;//true
    for(int i=2;i<num;i++){
        if(num%i==0){
            checkPrime=0;//false
            break;
        }
    }
    if(checkPrime==1)
       printf("Prime number");
    else
       printf("non prime");
    return 0;
}
