#include <stdio.h>

void main(){
    int a,b,sum,diff,prod,quo,mod;
    
    //Take input of two numbers from the user
    printf("Enter first number: ");
    scanf("%d", &a);
    
    printf("Enter second number: ");
    scanf("%d", &b);
    
    // Perform arithmetic operations
    sum = a + b;
    diff = a - b;
    prod = a * b;
    quo = a / b;
    mod = a % b;
    
    // Print the results
    printf("Sum: %d\n", sum);
    printf("Difference: %d\n", diff);
    printf("Product: %d\n", prod);
    printf("Quotient: %d\n", quo);
    printf("Remainder: %d\n", mod);
}