#include<stdio.h>
void main(){
    int curr=1,prev=1,temp,num;
    printf("Enter the number of terms you want: ");
    scanf("%d",&num);
    if(num==1){
        printf("Fibonacci series is : %d ",curr);
    }else if(num==2){
        printf("Fibonacci series is : %d, %d",prev,curr);
    }else if(num>2){
        printf("Fibonacci series is: %d, %d",prev,curr);
        for(int i=num-2;i>0;i--){
            temp=curr;
            curr+=prev;
            prev=temp;
            printf(", %d",curr);
        }
    }

}