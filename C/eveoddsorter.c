#include<stdio.h>
void main(){
    int n;
    printf("How many numbers do you want to enter? ");
    scanf("%d",&n);
    int in[n],eve[n],od[n],eve_c=0,odd_c=0;
     for(int i=0; i<n;i++){
        printf("Enter element %d: ",i+1);
        scanf("%d",&in[i]);
    }
     for(int i=0; i<n;i++){
        if(in[i]%2==0){
            static int count=0;
            eve[count]=in[i];
            count++;
            eve_c++;
        }else{
            static int count=0;
            od[count]=in[i];
            count++;
            odd_c++;
        }
    }
    printf("Even values are: ");
    for(int i=0;i<eve_c;i++){
        printf("%d, ",eve[i]);
    }
    printf("\n");
     printf("Even values are: ");
    for(int i=0;i<odd_c;i++){
        printf("%d, ",od[i]);
    }

    }
