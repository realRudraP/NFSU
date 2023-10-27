#include<stdio.h>
void main(){
    int sp,pro,cp_15,cp;
    printf("Please enter the selling price and profit of 15 items: ");
    scanf("%d %d",&sp,&pro);
    cp_15=sp-pro;
    cp=cp_15/15;
    printf("The cost price of one item is %d",cp);
    }
