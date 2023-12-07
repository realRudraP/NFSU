#include<stdio.h>
void main(){
    int r,c;
    printf("Enter the number of rows and columns: ");
    scanf("%d %d",&r,&c);
    int a[r][c],b[r][c],res[r][c]; //Initialize three arrays with the given number of rows and columns. 
    //Read Matrix 1 element by element
    for(int row=0;row<r;row++){
        for (int col=0;col<c;col++){
            printf("Matrix 1: Element [%d][%d]= ",row,col);
            scanf("%d",&a[row][col]);
        }
    }
    //Read Matrix 2 element by element
    for(int row=0;row<r;row++){
        for (int col=0;col<c;col++){
            printf("Matrix 2: Element [%d][%d]= ",row,col);
            scanf("%d",&b[row][col]);
        }
    }
    //Add both matrices and store them in the resultant matrix element by element
    for(int row=0;row<r;row++){
        for (int col=0;col<c;col++){
            res[row][col]=a[row][col]+b[row][col];
        }
    }
    //Print the resultant matrix
    for(int row=0;row<r;row++){
        for(int col=0;col<c;col++){
            printf("%d |",res[row][col]);
        }
        printf("\n");
    }
    }
