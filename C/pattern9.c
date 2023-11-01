#include<stdio.h>
void main(){
    int n;
    char ch='A';
    printf("Enter the number of rows: ");
    scanf("%d",&n);
    for(int i=0;i<=n;i++)
    { ch='A';
        for(int j=i;j>0;j--){
            printf( "%c" ,ch);
            ch++;
        }
        printf("\n");
    }
    }

