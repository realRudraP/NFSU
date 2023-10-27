#include<stdio.h>
void main(){
    int sf_cost,bp_cost,daily_cost,monthly_cost,total_cost;
    sf_cost=5*10;
    bp_cost=1*11;
    daily_cost=sf_cost+bp_cost;
    monthly_cost= daily_cost*31;
    total_cost=monthly_cost*5;
    printf("The total amount spent by 5 people in the month of August is Rs.%d",total_cost);
    }
