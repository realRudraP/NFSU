#include<stdio.h>
void main(){
    int in;
    printf("Please enter a number: ");
    scanf("%d",&in);
    if(in>0){
        printf("The given number is positive");
    }else if(in==0){
        printf("The given number is zero");
    }else{
        printf("The given number is negative");
    }
}