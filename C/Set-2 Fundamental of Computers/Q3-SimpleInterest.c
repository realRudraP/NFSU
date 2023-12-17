#include <stdio.h>

int main(){
    float rate_of_interest, principal, tenure, simple_interest;
    
    // Take input of rate of interest, principal and tenure from the user
    printf("Enter the rate of interest, principal and tenure in years separated by spaces: ");
    scanf("%f %f %f", &rate_of_interest, &principal, &tenure);
    
    // Calculate the simple interest
    simple_interest = (rate_of_interest / 100) * principal * tenure;
    
    // Print the simple interest
    printf("The simple interest is: %.2f\n", simple_interest);
    
    return 0;
}