#include<stdio.h>
void main(){
    float sum=0;
    int n;
    printf("Enter the number upto which you want the sum: ");
    scanf("%d",&n);
    if(n>0){
        for(int i=1;i<=n;i++){
            sum+=(float)1/i;
        }
    }else{
        printf("Please enter a postive integer greater than 0");
    }
    printf("The required sum is %f",sum);
}