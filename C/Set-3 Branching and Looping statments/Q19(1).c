#include<stdio.h>
/*
Final output for 5 rows:

AAAAA
BBBB
CCC
DD
E

*/
void main(){
    int n;
    printf("Enter the number of rows: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        for(int j=n-i;j>0;j--){
            printf("%c",65+i);
        }
        printf("\n");
    }
    }

