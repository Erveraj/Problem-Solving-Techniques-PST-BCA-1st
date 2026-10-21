//Program No. 32: Program to Display the Address of a Variable Using Pointers
#include <stdio.h>

int main() {
    int number = 10;
    int *ptr = &number;

    printf("Value of number = %d\n", *ptr);
    printf("Address of number = %p\n", (void *)ptr);

    return 0;
}
