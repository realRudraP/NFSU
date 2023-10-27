#include <stdio.h>
void main(){
    int num, last_digit,rest_num;
    printf("Please enter a number: ");
    scanf("%d",&num);
    last_digit=num%10;
    rest_num= num/10;
    printf("The initial digits are %d and the last digit is %d",rest_num,last_digit);
    }
