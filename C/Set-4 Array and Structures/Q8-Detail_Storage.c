#include<stdio.h>
struct personal{
    char name[20],doj[20];
    int salary;
    };
void main(){
    struct personal peop[5];
    for(int i=0;i<5;i++){
        printf("Enter the name of employee %d: ",i+1);
        gets(peop[i].name);
        printf("Enter the Date of Joining of employee %d: ",i+1);
        gets(peop[i].doj);
        printf("Enter the salary of employee %d: ",i+1);
        scanf("%d",&peop[i].salary);
        fflush(stdin);
    }
    printf("Completed gathering information. Now printing output\n \n\n");
    for(int i=0;i<5;i++){
        printf("Employee: %d\n",i+1);
        printf("\tName: %s\n",peop[i].name);
        printf("\tDate of Joining: %s\n",peop[i].doj);
        printf("\tSalary: %d\n",peop[i].salary);
        printf("\n\n");
    }
    }
