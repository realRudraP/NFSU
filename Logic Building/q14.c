#include<stdio.h>
void main(){
    float cm,inch,remain;
    int feet;
    printf("Please enter the value in cm: ");
    scanf("%f",&cm);
    feet=cm/30.48;
    remain=cm-(feet*30.48);
    inch=remain/2.54;
    printf("Feet=%d, Inches=%.2f",feet,inch);
    }
