#include<stdio.h>
void main(){
    long int sum=0;
    int n;
    printf("Enter the number upto which you want the sum: ");
    scanf("%d",&n);
    if(n>=0){
        for(int i=1;i<=n;i++){
            sum+=i*i;
        }
    }else{
        printf("Please enter a postive integer");
    }
    printf("The required sum is %ld",sum);
}