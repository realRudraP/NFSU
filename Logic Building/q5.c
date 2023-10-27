#include<stdio.h>
void main(){
    int a,b,c;
    printf("Give two numbers: ");
    scanf("%d %d",&a,&b);
    printf("The numbers given are a=%d and b=%d\n",a,b);
    c=b;
    b=a;
    a=c;
    printf("The interchanged numbers are a=%d and b=%d",a,b);
    }
