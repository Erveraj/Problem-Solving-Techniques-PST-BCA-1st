//Program No. 27: Program to Copy a String Using strcpy()
#include <stdio.h>
#include <string.h>

int main() {
    char source[100], destination[100];

    printf("Enter a string: ");
    if (fgets(source, sizeof(source), stdin) == NULL)
        return 1;

    source[strcspn(source, "\n")] = '\0';
    strcpy(destination, source);

    printf("Copied string = %s\n", destination);

    return 0;
}
