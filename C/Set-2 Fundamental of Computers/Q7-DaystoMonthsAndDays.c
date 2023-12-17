#include<stdio.h>
void main(){
    int in_days,months,days;
    printf("Enter the number of days: ");
    //Assuming one month to be of 30 days, we can find out 
    //the number of months by dividing the number of days with 30
    //and the number of days remaining is the remainder
    scanf("%d",&in_days);
    months=in_days/30;
    days=in_days%30;
    printf("%d days is equal to: %d months and %d days.",in_days,months,days);
}