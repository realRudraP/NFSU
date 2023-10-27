#include<stdio.h>
void main(){
    int basic,ma=1200;
    float da,hra,pf,gross,net;
    printf("Please enter the basic salary: ");
    scanf("%d",&basic);
    da=1.2*basic;
    hra=0.2*basic;
    pf=0.1*basic;
    gross=basic+hra+da+ma;
    net=gross-pf;
    printf("The gross salary is %.2f and the net salary is %.2f",gross,net);
    }
