#include<stdio.h>
void main(){
    int in,prime=1;
    printf("Enter a number: ");
    scanf("%d",&in);
    if(in==1){
        printf("Not a prime number.");
    }else if(in==0){
        printf("Neither prime nor composite");
    }else if(in>=2){
        for(int i=2;i<=in/2;i++){
            if(in%i==0) {
                prime = 0;
                break;
        }
        }
        if(prime==0){
            printf("Not a prime number");
        }else{
            printf("The given number is prime");
        }
    }else{
        printf("Please enter a positive integer");
    }
    
}