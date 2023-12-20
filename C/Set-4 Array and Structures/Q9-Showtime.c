#include<stdio.h>
struct time_struct{
    int hour,min,sec;
    };
void main(){
    struct time_struct time;
    printf("Enter the value of hours: ");
    scanf("%d",&time.hour);
    printf("Enter the value of minutes: ");
    scanf("%d",&time.min);
    printf("Enter the value of seconds: ");
    scanf("%d",&time.sec);
    // Input operation ended. Printing time

    printf("The time is %d:%d:%d",time.hour,time.min,time.sec);
}
