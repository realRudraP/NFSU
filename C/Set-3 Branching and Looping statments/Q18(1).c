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
    for(int i=n;i>0;i--){
        for (int j=i;j>0;j--){
            printf(" ");
        }
        for(int k=1;k<=n-i+1;k++){
            printf(" %d ",k);
        }
        printf("\n");
    }
    }
