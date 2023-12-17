#include<stdio.h>
void main(){
    int sum=0,n;
    float avg;
    printf("Enter the number of elements you want to calculate average for: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        int in;
        printf("\n Enter a number %d :",i);
        scanf("%d",&in);
        sum+=in;
    }
    avg=(float)sum/n;
    printf("The sum of the given numbers is %d and the average is %.2f",sum,avg);
}