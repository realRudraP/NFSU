#include<stdio.h>
void main(){
    int num,d_1,d_2,d_3,temp,sum;
    printf("Please enter the 3 digit number: ");
    scanf("%d",&num);
    d_1=num%10;
    temp=num/10;
    d_2=temp%10;
    temp=temp/10;
    d_3=temp%10;
    sum=d_1+d_2+d_3;
    printf("The sum of the digits of the number %d is %d",num,sum);
    }
