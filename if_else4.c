//write a c program to determine the largest number from 3 given numbers by user.
#include<stdio.h>
int main(){
    int num1,num2,num3;
    printf("enter the value of num1:");
    scanf("%d",&num1);
    printf("enter the value of num2:");
    scanf("%d",&num2);
    printf("enter the value of num3:");
    scanf("%d",&num3);
    if(num1>num2){
        if(num1>num3)
            printf("num1 is largest");
        else
            printf("num3 is largest");      
    }
    else{
        if(num2>num3)
            printf("num2 is largest");
        else
            printf("num3 is largest");    
    }
        

    return 0;
}