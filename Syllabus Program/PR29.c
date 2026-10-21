//Program No. 29: Program to Reverse a String Using a Loop
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, length;

    printf("Enter a string: ");
    if (fgets(str, sizeof(str), stdin) == NULL)
        return 1;

    str[strcspn(str, "\n")] = '\0';
    length = (int)strlen(str);

    printf("Reversed string = ");
    for (i = length - 1; i >= 0; i--)
        putchar(str[i]);

    putchar('\n');
    return 0;
}
