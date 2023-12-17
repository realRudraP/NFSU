#include<stdio.h>
void main(){
    int in;
    printf("Enter a number: ");
    scanf("%d",&in);
    if(in%2==0){
        printf("\nThe number is even.\n");
    }else{
        printf("\nThe number is odd.\n");
    }
}