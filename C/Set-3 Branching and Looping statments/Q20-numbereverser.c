#include<stdio.h>
void main(){
    int num,ans=0,temp;
    printf("Enter the number: ");
    scanf("%d",&num);
    temp=num;
    while(temp>0){
        ans=ans+(temp%10);
        temp= temp/10;
        if(temp!=0){
            ans*=10;
        }
    }
    printf("The reverse of %d is %d",num,ans);

    }


    
// -----------------------------------------------------------------------------------------------
//Less efficient solution below
/*
void main(){
    int n,temp,reverse=0,power=0;
    printf("Give the number: ");
    scanf("%d",&n);
    temp=n;
    while(temp!=0){
        temp=temp/10;
        power++;
    }
    temp=n;
    while(temp!=0){
        int in;
        in=temp%10;
        reverse= reverse+(in*pow(10,power-1));
        temp=temp/10;
        power--;
    }
    printf("Reverse: %d",reverse);
    }
*/
