#include<stdio.h>
void main(){
    int a,b;
    printf("Enter two numbers: ");
    scanf("%d %d",&a,&b);
    printf("The entered numbers are a=%d and b=%d\n",a,b);
    b=a+b;
    a=b-a;
    b=b-a;
    printf("The interchanged numbers are a=%d and b=%d",a,b);
    }
