#include<stdio.h>
void main(){
    float usd,inr,exr;
    printf("Give the value in USD and the exchange rate: ");
    scanf("%f %f",&usd,&exr);
    inr=usd*exr;
    printf("The value of $%.2f is Rs.%.2f",usd,inr);
    }
