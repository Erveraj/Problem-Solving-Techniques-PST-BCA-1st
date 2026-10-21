//Program No. 26: Program to Find the Length of a String
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];

    printf("Enter a string: ");
    if (fgets(str, sizeof(str), stdin) == NULL)
        return 1;

    str[strcspn(str, "\n")] = '\0';

    printf("Length of string = %zu\n", strlen(str));

    return 0;
}
