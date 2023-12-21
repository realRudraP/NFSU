#include<stdio.h>
int sumofn(int n);

void main(){
    int in;
    printf("Enter the value upto which you wish to calculate: ");
    scanf("%d",&in);
    printf("%d is the required result",sumofn(in));
    }
int sumofn(int n){
    int sum=0;
    while(n>0){
        sum+=n;
        n--;
    }
    return sum;
    }
