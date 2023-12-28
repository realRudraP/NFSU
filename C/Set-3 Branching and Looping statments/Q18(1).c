#include<stdio.h>
/*
Final Output for 5 rows:

      1 
     1  2 
    1  2  3 
   1  2  3  4 
  1  2  3  4  5 

*/
void main(){
    int n;
    printf("Enter the number of rows: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for (int j=n-i;j>0;j--){
            printf(" ");
        }
        for(int k=1;k<=i;k++){
            printf(" %d ",k);
        }
        printf("\n");
    }
    }
