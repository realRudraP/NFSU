#include<stdio.h>
void main(){
    int x,y,result;
    printf("Please enter the base and the power: ");
    scanf("%d %d",&x,&y);
    result=pow(x,y);
    printf("%d^%d=%d",x,y,result);
    }
