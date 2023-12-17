#include<stdio.h>
void main(){
    int n;
    printf("How many elements would you like to give?");
    scanf("%d",&n);
    int in[n];
    for(int i=0;i<n;i++){
        printf("Enter number %d: ",i+1);
        scanf("%d",&in[i]);
        printf("\n");
    }
    for(int a=0;a<n;a++){
        for(int b=0;b<n;b++){
            if(in[a]<in[b]){
                int temp;
                temp=in[a];
                in[a]=in[b];
                in[b]=temp;
            }
        }
    }
    printf("The array sorted into ascending order is: %d",in[0]);
    for(int p=1;p<n;p++){
        printf(", %d",in[p]);
    }
    }
