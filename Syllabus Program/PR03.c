//Program No 03: WRITE A PROGRAM to find the square of a given number. 
#include <stdio.h>

int main() {
    int num, square;

    printf("Enter a number: ");
    scanf("%d", &num);

    square = num * num;

    printf("Square of %d = %d", num, square);

    return 0;
}