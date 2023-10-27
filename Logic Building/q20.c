#include<stdio.h>
void main(){
    int sub_1,sub_2,sub_3,total;
    float per;
    printf("Please enter the marks of all the subjects out of 100: ");
    scanf("%d %d %d",&sub_1,&sub_2,&sub_3);
    total=sub_1+sub_2+sub_3;
    per=total/3.0;
    printf("The total marks are %d and the percentage is %.2f",total,per);
    }
