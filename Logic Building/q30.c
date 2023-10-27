#include <stdio.h>
void main(){
    int in,temp,k2,h5,h2,h1,fif,twe,ten,fiv,two,one,num;
    printf("Please enter the amount to be sorted: ");
    scanf("%d",&in);
    temp=in;
    k2=temp/2000;
    temp=temp%2000;
    h5=temp/500;
    temp=temp%500;
    h2=temp/200;
    temp=temp%200;
    h1=temp/100;
    temp= temp%100;
    fif=temp/50;
    temp=temp%50;
    twe=temp/20;
    temp=temp%20;
    ten=temp/10;
    temp=temp%10;
    fiv=temp/5;
    temp=temp%5;
    two=temp/2;
    temp=temp%2;
    one=temp;
    num=k2+h5+h2+h1+fif+twe+ten+fiv+two+one;
    printf("The total number of notes is %d. The individual distribution is:\n1.2000: %d\n2.500= %d\n3.200= %d\n4.100= %d\n5.50= %d\n6.20= %d\n7.10= %d\n8.5= %d\n9.2= %d\n10. 1=%d",num,k2,h5,h2,h1,fif,twe,ten,fiv,two,one);
    }
