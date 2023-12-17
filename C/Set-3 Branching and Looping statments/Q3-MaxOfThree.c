#include<stdio.h>
void main(){
    int max,a,b,c;
    printf("Enter the three numbers: ");
    scanf("%d %d %d",&a,&b,&c);
    if(a>b){
        if(a>c){
            max=a;
        }else{
            max=c;
        }
    }else{
        if(b>c){
            max=b;
        }else{
            max=c;
        }
    }
    printf("The maximum number is %d",max);
}