#include<stdio.h>
void main(){
    float price,qty,amt;
    printf("Please give the price and the quantity: ");
    scanf("%f %f",&price,&qty);
    amt=price*qty;
    printf("The amount is: %.2f",amt);
}
