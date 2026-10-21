//Program to find the size of different data types
#include <stdio.h>

int main()
{
    printf("Size of int = %zu bytes\n", sizeof(int));
    printf("Size of float = %zu bytes\n", sizeof(float));
    printf("Size of double = %zu bytes\n", sizeof(double));
    printf("Size of char = %zu byte\n", sizeof(char));

    return 0;
}