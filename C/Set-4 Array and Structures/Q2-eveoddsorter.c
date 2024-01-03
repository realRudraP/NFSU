#include<stdio.h>
/*
IMPORTANT (for C practical file)
You should skip the part in which the number of inputs is being taken from the user
as the question explicitly states 10 inputs.
Also, replace n with 10 everywhere.
*/
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
            static int counte=0;
            eve[counte]=in[i];
            counte++;
            eve_c++;
        }else{
            static int counto=0;
            od[counto]=in[i];
            counto++;
            odd_c++;
        }
    }
    printf("Even values are: ");
    for(int i=0;i<eve_c;i++){
        printf("%d, ",eve[i]);
    }
    printf("\n");
     printf("Odd values are: ");
    for(int i=0;i<odd_c;i++){
        printf("%d, ",od[i]);
    }

    }
