#include<stdio.h>
int main(){
    int amount;
    printf("enter the value of amount:");
    scanf("%d",&amount);
    if(amount>=5000){
        if(amount>=15000)
            printf("Maldivs");
        else if(amount>=10000)
            printf("Gao");
        else
            printf("Bad luck");
    }
    else{
        if(amount>=3000)
            printf("kolkata");
        else if(amount>=1000)
            printf("road trip");
        else
            printf("Bad luck");
    }         
    return 0;
}