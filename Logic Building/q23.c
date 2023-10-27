#include<stdio.h>
void main(){
    int inp,sec,min,hours,store;
    printf("Please enter the number of seconds: ");
    scanf("%d",&inp);
    store=inp;
    hours=store/3600;
    store=store%3600;
    min=store/60;
    store=store%60;
    sec=store;
    printf("%d seconds is equal to %d hours, %d minutes and %d seconds",inp,hours,min,sec);
    }

