#include<stdio.h>
void main(){
    float fah,centi;
    printf("Please enter the value in Centigrade: ");
    scanf("%f",&centi);
    /* Conversion formula from Centigrade to Fahrenheit */
    fah=(1.8*centi)+32;
    printf("\nThe temperature %0.1f C is equal to %0.1f F\n", centi, fah);
}