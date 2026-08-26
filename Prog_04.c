//Program No 04: WRITE A PROGRAM to calculate the average of three real numbers. 

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