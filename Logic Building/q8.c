#include<stdio.h>
#define PI 3.14
void main(){
    float r,area;
    printf("Please enter the radius of the circle: ");
    scanf("%f",&r);
    area=PI*r*r;
    printf("The area of the required circle is %.3f sq. units", area);
    }
