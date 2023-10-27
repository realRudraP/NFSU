#include<stdio.h>
void main(){
    int inp,years,weeks,days,temp;
    printf("Please enter the number of days: ");
    scanf("%d",&inp);
    temp=inp;
    years=temp/365;
    temp= temp%365;
    weeks=temp/7;
    temp= temp%7;
    days=temp;
    printf("%d days is equal to %d years, %d weeks and %d days.",inp,years,weeks,days);
    }
