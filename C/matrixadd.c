#include<stdio.h>
void main(){
    int m,n;
    printf("Enter the number of rows and columns: ");
    scanf("%d %d",&m,&n);
    int mat[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("Please enter the element at %d,%d",i+1,j+1);
            scanf("%d",&mat[i][j]);
            printf("\n");
        }
    }

    }
