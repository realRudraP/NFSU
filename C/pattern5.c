#include<stdio.h>
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
