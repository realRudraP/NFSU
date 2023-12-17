#include<stdio.h>
void main(){
    long int product=1;
    int n;
    printf("Please enter the number whose factorial you want to calculate: ");
    scanf("%d",&n);
    for(int i = 1 ;i<=n;i++){
        product *= i;
    }
    printf("The Factorial of %d is :%ld",n,product);
}