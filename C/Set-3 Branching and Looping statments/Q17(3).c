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
    for(int i=1;i<=n;i++){
        for (int j=n-i;j>0;j--){
            printf(" ");
        }
        for(int k=i;k>0;k--){
            printf(" * ");
        }
        printf("\n");
    }
    }
