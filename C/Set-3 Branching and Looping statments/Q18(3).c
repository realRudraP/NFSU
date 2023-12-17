#include<stdio.h>
/*
Final output for 5 rows:

 5  5  5  5  5 
  4  4  4  4 
   3  3  3 
    2  2 
     1 

*/
void main(){
    int n;
    printf("Enter the number of rows: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        for (int j=i;j>0;j--){
            printf(" ");
        }
        for(int k=1;k<=n-i;k++){
            printf(" %d ",n-i);
        }
        printf("\n");
    }
    }
