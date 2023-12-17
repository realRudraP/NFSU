#include<stdio.h>
void main(){
    float km,feet,inch,meter,centimeter;
    //Take input from user in kilometers:
    printf("Enter the distance in kilometers : ");
    scanf("%f",&km);
    //Calculate and print the equivalent values in other units:
    meter=km*1000;
    centimeter=meter*100;
    feet=meter*3.28084;
    inch=feet*12;
    //Now print the results
    printf("\n%.2f Kilometers is equal to %.2f meters\n%.2f centimeters\n%.2f Feet and \n%.2f Inches\n",km,meter,centimeter,feet,inch);
}