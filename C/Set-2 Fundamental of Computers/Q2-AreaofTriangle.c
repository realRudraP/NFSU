#include <stdio.h>

void main(){
    float base, height, area;
    
    // Take input of base and height from the user
    printf("Enter the base of the triangle: ");
    scanf("%f", &base);
    
    printf("Enter the height of the triangle: ");
    scanf("%f", &height);
    
    // Calculate the area of the triangle
    area = 0.5 * base * height;
    
    // Print the area
    printf("The area of the triangle is: %.2f\n", area);
}