#include <stdio.h>

int main()
{
    float a, b, c, average;

    printf("Enter three numbers: ");
    scanf("%f %f %f", &a, &b, &c);

    average = (a + b + c) / 3;

    printf("Average = %.2f", average);

    return 0;
}