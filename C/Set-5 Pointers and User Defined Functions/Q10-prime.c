#include<stdio.h>
int prime(int n);
void main(){
     int in,stat;
     printf("Please enter the number which you want to check: ");
     scanf("%d",&in);
     stat=prime(in);
     printf("Prime status=%d",stat);
}
int prime(int n){
    int res=1;
    if(n<=1){
        res=0;
    }else{
        for(int i=2;i<=(n/2);i++){
            if(n%i==0){
                res=0;
                break;
            }
        }
        }
    return res;
    }
