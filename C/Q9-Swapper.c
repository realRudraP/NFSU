#include<stdio.h>
void swap(int*a,int*b);
void main(){
    int x,y;
    printf("Enter the value of x and y: ");
    scanf("%d %d",&x,&y);
    swap(&x,&y);
    printf("Value after swapping: x=%d, y=%d",x,y);
    }
void swap(int*a,int*b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
    return;
    }
