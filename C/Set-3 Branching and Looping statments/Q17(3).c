#include<stdio.h>
/*
Final output for 5 rows:

      * 
     *  * 
    *  *  * 
   *  *  *  * 
  *  *  *  *  * 

*/
void main(){
    int n;
    printf("Enter the number of rows: ");
    scanf("%d",&n);
    for(int i=n;i>0;i--){
        for (int j=i;j>0;j--){
            printf(" ");
        }
        for(int k=n-i+1;k>0;k--){
            printf(" * ");
        }
        printf("\n");
    }
    }
