#include<stdio.h>
/*
Final output: (for 5 rows)
*
**
***
****
*****
*/
void main(){
    int n;
    printf("Enter the number of rows: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int p=0;p<i;p++){
            printf("*");
        }
        printf("\n");
    }
    }
