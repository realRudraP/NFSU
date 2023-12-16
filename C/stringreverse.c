#include<stdio.h>
#include<string.h>
void main(){
    int n;
    printf("Please enter the number of characters you want to print: ");
    scanf("%d",&n);
    char in[n+1],rev[n+1];
    printf("Please enter your string: ");
    scanf("%s",in);
    for(int i=0;i<n;i++){
        rev[i]=in[n-i-1];
    }
    rev[n]='\0';
    printf("%s",rev);
    }
