#include<stdio.h>
int fact(int n);
void main(){
    int in,result;
    printf("Enter your number: ");
    scanf("%d",&in);
    result=fact(in);
    printf("The factorial of %d is %d",in,result);
}
int fact(int n){
    int f;
    if(n==1){
        return 1;
    }else{
        f=n*fact(n-1);
        return f;
    }
}