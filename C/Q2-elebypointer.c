#include<stdio.h>
void main(){
    int arr[3]={10,20,30};
    int *add=&arr;
    for(int i=0;i<3;i++){
        printf("The value of the %d element is %d\n",i+1,*(add+i));
    }
}
