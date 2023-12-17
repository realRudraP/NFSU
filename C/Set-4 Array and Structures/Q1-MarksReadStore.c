#include<stdio.h>
void main(){
    int marks[20];
    for(int i=0;i<20;i++){
        printf("Enter the marks of student %d: ",i+1);
        scanf("%d",&marks[i]);
    }
    printf("Your marks are stored in the array!");
}