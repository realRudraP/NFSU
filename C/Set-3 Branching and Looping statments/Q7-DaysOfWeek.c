#include <stdio.h>
void main()
{
    int num;
    printf("Enter a number between 1 and 7: ");
    scanf("%d", &num);
    switch (num)
    {
    case 1:
        printf("\nSunday");
        break;
    case 2:
        printf("\nMonday");
        break;
    case 3:
        printf("\nTuesday");
        break;
    case 4:
        printf("\nWednesday");
        break;
    case 5:
        printf("\nThursday");
        break;
    case 6:
        printf("\nFriday");
        break;
    case 7:
        printf("Saturday");
        break;

    default:
        printf("Please enter a number between 1 and 7");
        break;
    }
}