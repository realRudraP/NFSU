#include<stdio.h>
int raise(int x,int y);
void main(){
    int x,y,res;
    printf("Enter the base: ");
    scanf("%d",&x);
    printf("Enter the power: ");
    scanf("%d",&y);
    res=raise(x,y);
    printf("%d^%d=%d",x,y,res);
    }
int raise(int x,int y){
    int ret=1;
    for(int i=1;i<=y;i++){
        ret*=x;
    }
    return ret;
    }
