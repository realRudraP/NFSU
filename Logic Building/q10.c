#include<stdio.h>
void main(){
    int p,n;
    float rate,si;
    printf("Please give the Principal, Rate of interest and the tenure in years: ");
    scanf("%d %f %d",&p,&rate,&n);
    si=p*rate*n/100;
    printf("The simple interest is %.2f",si);
    }
