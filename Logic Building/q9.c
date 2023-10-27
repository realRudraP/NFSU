#include<stdio.h>
void main(){
    int base,height;
    float area;
    printf("Please enter the base and the height of the required triangle: ");
    scanf("%d %d", &base,&height);
    area=base*height*0.5;
    printf("The area of the required triangle is : %.2f square units",area);
    }
