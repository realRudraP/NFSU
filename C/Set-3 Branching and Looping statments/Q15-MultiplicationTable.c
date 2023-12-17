#include<stdio.h>
void main(){
    int n;
    printf("Please enter the number whose table you want to print: ");
    scanf("%d",&n);
    for(int i=1;i<=10;i++){
        printf("%d x %d = %d\n",n,i,n*i);
    }
}