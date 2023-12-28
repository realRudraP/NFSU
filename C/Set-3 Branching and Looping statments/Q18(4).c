#include<stdio.h>
/*
Final output for 5 rows:

      1 
     2  2 
    3  3  3 
   4  4  4  4 
  5  5  5  5  5 

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
            printf(" %d ",i);
        }
        printf("\n");
    }
    }
