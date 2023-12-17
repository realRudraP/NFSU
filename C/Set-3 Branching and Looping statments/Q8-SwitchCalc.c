#include <stdio.h>
void main()
{
    int a, b, res, op;
    printf("Please enter the two numbers: ");
    scanf("%d %d", &a, &b);
    printf("Please enter your choice for the operation to be performed:\n1)Addition\n2)Subtraction\n3)Multiplication: ");
    scanf("%d", &op);
    switch (op)
    {
    case 1:
        res = a + b;
        break;
    case 2:
        res = a - b;
        break;
    case 3:
        res = a * b;
        break;
    }
    printf("The result is %d", res);
}