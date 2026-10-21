//Program No. 35: Program to Read Data from a File
#include <stdio.h>

int main() {
    FILE *fp;
    int ch;

    fp = fopen("input.txt", "r");

    if (fp == NULL) {
        printf("Could not open input.txt. Create the file first.\n");
        return 1;
    }

    printf("File contents:\n");
    while ((ch = fgetc(fp)) != EOF) {
        putchar(ch);
    }

    fclose(fp);
    return 0;
}
