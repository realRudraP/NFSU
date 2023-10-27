#include<stdio.h>
void main(){
    int p,n;
    float r,amt,ci;
    printf("Please enter the principal, Rate of Interest and Duration in years: ");
    scanf("%d %f %d",&p,&r,&n);
    amt=p*(pow((1+r/100),n));
    ci=amt-p;
    printf("The compound interest is %.2f",ci);
    }
