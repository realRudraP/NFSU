#include<stdio.h>
/*
Final output for 5 rows:

 1  2  3  4  5 
  1  2  3  4 
   1  2  3 
    1  2 
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
            printf(" %d ",k);
        }
        printf("\n");
    }
    }
