#include<stdio.h>
int main(){
    int money,charge;
    printf("Enter the money and charge:");
    scanf("%d%d",&money,&charge);
    if(money>5000&&charge>80)
        printf("GO");
    else
        printf("Stay");    
    return 0;
}