#include<stdio.h>
void swap(int *a,int*b);
void main(){
    int a=20,b=30;
    int *p=&a,*q=&b;
    swap(p,q);
    printf("a=%d b=%d",a,b);
}
void swap(int *a,int*b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;

}