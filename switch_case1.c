#include<stdio.h>
int main(){
    int num,rem;
    printf("Enter the number:");
    scanf("%d",&num);
    rem=(num%3)||(num%5);
    switch(rem){
        case 0: printf("success");
        break;
        case 1:printf("oops");
        break;
    }
    return 0;
}