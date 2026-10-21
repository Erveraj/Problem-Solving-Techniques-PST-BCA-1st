//Program No. 28: Program to Compare Two Strings
#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];

    printf("Enter first string: ");
    if (fgets(str1, sizeof(str1), stdin) == NULL)
        return 1;

    printf("Enter second string: ");
    if (fgets(str2, sizeof(str2), stdin) == NULL)
        return 1;

    str1[strcspn(str1, "\n")] = '\0';
    str2[strcspn(str2, "\n")] = '\0';

    if (strcmp(str1, str2) == 0)
        printf("Strings are equal.\n");
    else
        printf("Strings are not equal.\n");

    return 0;
}
