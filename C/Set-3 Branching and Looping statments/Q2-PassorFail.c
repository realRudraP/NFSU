#include<stdio.h>
void main(){
    int marks;
    printf("Please enter marks of the student (out of 100): ");
    scanf("%d",&marks);
    if(marks>=50){
        printf("The student has passed the exam");
    }else{
        printf("The student has failed the exam");
    }
}