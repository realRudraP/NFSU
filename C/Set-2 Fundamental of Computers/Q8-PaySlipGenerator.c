#include<stdio.h>
void main(){
    int basic, ma=300;
    float da,hra,pf,gross,nt;
    printf("Enter Basic Salary: ");
    scanf("%d",&basic);
    hra=(7.5/100)*basic;
    da=0.1*basic;
    pf=0.125*basic;
    gross=basic+da+hra+ma;
    nt=gross-pf;
    printf("The Gross Salary is %.2f and the net salary is %.2f",gross,nt);
}