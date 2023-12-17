#include<stdio.h>
/*
Output for 5 rows:

*****
****
***
**
*

*/
void main(){
    int n;
    printf("Enter the number of rows: ");
    scanf("%d",&n);
    for(int i=n;i>0;i--){
        for(int p=0;p<i;p++){
            printf("*");
        }
        printf("\n");
    }
    }
