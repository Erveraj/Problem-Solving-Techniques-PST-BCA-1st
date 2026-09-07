//WRITE A PROGRAM to Compute Quotient and Remainder
#include <stdio.h>

int main()
{
    int num1, num2, quotient, remainder;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    quotient = num1 / num2;
    remainder = num1 % num2;

    printf("Quotient = %d\n", quotient);
    printf("Remainder = %d", remainder);

    return 0;
}