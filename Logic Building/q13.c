#include<stdio.h>
void main(){
    int ml;
    float lit,ga;
    printf("Enter the value in litres: ");
    scanf("%f",&lit);
    ml=lit*1000;
    ga=lit*0.264172;
    printf("The value in mL is %d and in gallons is %f",ml,ga);
    }
