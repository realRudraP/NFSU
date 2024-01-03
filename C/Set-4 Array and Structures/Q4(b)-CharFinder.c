#include<stdio.h>
void main(){
    char str[20],target,flag='0';
    printf("Enter a string: ");
    gets(str);
    printf("\nEnter the character to be found: ");
    scanf("%c",&target);
    for(int i=0;str[i]!='\0';i++){
        if(str[i]==target){
            printf("\nCharacter '%c' is present at index %d.", target, i);
            flag='1';
    }
    }
    if(flag=='0')
    printf("\nCharacter '%c' is not present in the string.", target);   
    
}