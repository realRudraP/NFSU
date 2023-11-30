#include<stdio.h>
void main(){
    int n;
    printf("How many numbers do you want to enter? ");
    scanf("%d",&n);
    int in[n];
    for(int i=0; i<n;i++){
        printf("Enter element %d: ",i+1);
        scanf("%d",&in[i]);
    }
    for(int i=0;i<n-1;i++){
        int temp;
        for(int j=i+1;j<n;j++){
            if(in[j]<in[i]){
                temp=in[i];
                in[i]=in[j];
                in[j]=temp;
            }
        }
    }
    printf("The sorted array is: [%d",in[0]);
    for(int i=1; i<n;i++){
        printf(", %d",in[i]);
    }
    printf("]");

    }
