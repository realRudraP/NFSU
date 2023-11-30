#include<stdio.h>
void main(){
    int n;
    printf("How many numbers do you want to give? ");
    scanf("%d",&n);
    int in[n];
    for(int i=0;i<n;i++){
        printf("Enter element %d: ",i);
        scanf("%d",&in[i]);

    }
    int max=in[0];
    for(int i=1;i<n;i++){
        if(in[i]>max){
            max=in[i];
        }
    }
    printf("Maximum value is: %d",max);
    }
