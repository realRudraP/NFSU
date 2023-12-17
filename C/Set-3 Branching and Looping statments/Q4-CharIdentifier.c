#include<stdio.h>
void main(){
    char in;
    printf("Enter your character: ");
    scanf("%c", &in);
    //For reference, use ASCII values at https://www.rapidtables.com/code/text/ascii-table.html
    if(in >= 'A' && in <= 'Z'){  /*Checking for uppercase alphabets*/
    printf("\nYou entered an Uppercase Alphabet.\n");
    }else if (in >= 'a' && in <= 'z') {/*Checking for lowercase alphabets*/
    printf("\nYou entered a Lowercase Alphabet.\n");
    }else if(in>='0'&& in<='9'){
        printf("\nYou entered a Digit.\n");
    }else{
        printf("You entered a special character");
    }
}