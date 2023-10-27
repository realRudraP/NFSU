#include<stdio.h>
void main(){
    int avg_amt,no_of_times,monthly_amt,yearly_amt;
    printf("Please enter the average amount per visit and the number of visits per month: ");
    scanf("%d %d",&avg_amt,&no_of_times);
    monthly_amt=avg_amt*no_of_times;
    yearly_amt=monthly_amt*12;
    printf("The average amount in an year is %d",yearly_amt);
    }
