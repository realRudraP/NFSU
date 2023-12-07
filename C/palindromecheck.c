#include<stdio.h>
void main(){
    char txt[20];
    printf("Enter your string: ");
    scanf("%s",txt);
    int len=strlen(txt),palin=1;
    for(int i=0;i<(len/2);i++){
        if(txt[i]!=txt[len-i-1]){
            printf("Not a palindrome");
            palin=0;
            break;
        }
    }
    if(palin==1){
        printf("The given string is a plaindrome");
    }
    }
