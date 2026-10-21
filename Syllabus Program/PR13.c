//Program No. 13: Program Using Unformatted Input Functions
#include <stdio.h>

int main() {
    char ch;

    printf("Enter a character: ");
    ch = getchar();

    printf("You entered: ");
    putchar(ch);
    putchar('\n');

    return 0;
}
