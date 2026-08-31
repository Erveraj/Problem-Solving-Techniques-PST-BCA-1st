//Write a program to Find ASCII Value of a Character

#include <stdio.h>

int main()
{
    char ch;

    printf("Enter a character: ");
    scanf("%c", &ch);

    printf("ASCII value of %c = %d", ch, ch);

    return 0;
}