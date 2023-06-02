//check the number is prime or not
#include<stdio.h>
int main(){
    int num;
    printf("Enter the value of number:");
    scanf("%d",&num);
    for(int i=2;i<num;i++){
        if(num%i==0)
        printf("this is not a prime number.");
        return 0;
    }
    printf("this is a prime number");

    return 0;
}