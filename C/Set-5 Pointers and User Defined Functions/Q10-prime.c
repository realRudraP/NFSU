#include<stdio.h>
void prime(int n);
void main(){
     int in;
     printf("Please enter the number which you want to check: ");
     scanf("%d",&in);
     prime(in);
}
void prime(int n){
    int res=1;
    if(n<=1){
        res=0;
    }else{
        for(int i=2;i<+(n/2);i++){
            if(n%i==0){
                res=0;
                break;
            }
        }
        }
        printf("Prime Status: %d",res);
    }
