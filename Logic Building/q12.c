#include<stdio.h>
void main(){
    float fh,cl;
    printf("Please enter the temperature in Fahrenheit: ");
    scanf("%f",&fh);
    cl=(fh-32)*5/9;
    printf("The temperature in degree celcius is: %.2f",cl);
    }
