#include<stdio.h>
void main(){
    int marks;
    printf("Enter the marks of the student: ");
    scanf("%d",&marks);
    if(marks>=80&&marks<=100){
        printf("Passed with Distinction");
    }else if(marks<80&&marks>=60){
        printf("Passed with First Class");
    }else if(marks<60&&marks>=40){
        printf("Passed with Second Class");
    }else if(marks>=0&&marks<40){
        printf("Failed");
    }else{
        printf("Please enter marks in the range 0 to 100");
    }
}