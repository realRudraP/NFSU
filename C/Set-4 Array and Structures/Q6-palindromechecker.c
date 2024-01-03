#include <stdio.h>
#include <string.h>
// Simple check method, case sensitive
void main()
{
    char in[15];
    printf("Enter the string: ");
    gets(in);
    int len, pal = 1;
    len = strlen(in);
    for (int i = 0; i < len; i++)
    {
        if (in[i] == in[len - 1 - i])
        {
            continue;
        }
        else
        {
            pal = 0;
            break;
        }
    }
    switch (pal)
    {
    case 0:
        printf("Not a palindrome");
        break;
    case 1:
        printf("Palindrome");
        break;
    }
}
