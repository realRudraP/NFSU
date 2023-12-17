#include<string.h>
#include <stdio.h>

int main() {
    char txt [20];
    printf("Enter your text: ");
    scanf("%s",txt);
    int n=strlen(txt);
    for(int i=0;i<(n/2);i++){
        char temp;
        temp=txt[i];
        txt[i]=txt[n-i-1];
        txt[n-i-1]=temp;
    }
    printf("%s",txt);
    return 0;
}
