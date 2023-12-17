#include<stdio.h>
void main(){
    int a,b,temp;
    //Take input from user and store in two variables, a and b
    //Then print the values of a and b
    printf("Enter the values of a and b: ");
    scanf("%d %d",&a,&b);
    printf("a=%d and b=%d",a,b);
    /*Swapping the values of a and b using temporary variable temp*/
    temp=a;
    a=b;
    b=temp;
    printf("\nAfter swapping\na=%d and b=%d",a,b);
}