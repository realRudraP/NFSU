#include<stdio.h>
void main(){
    int length,width,perimeter;
    printf("Enter the length and the width of the required rectangle: ");
    scanf("%d %d",&length,&width);
    perimeter=2*(length+width);
    printf("The perimeter of the required rectangle is %d",perimeter);
    }
