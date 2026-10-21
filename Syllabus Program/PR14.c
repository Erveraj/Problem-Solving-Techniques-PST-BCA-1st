//Program No. 14: Program to Find Area of a Rectangle Using Unformatted Output Functions
#include <stdio.h>

int main() {
    int length, breadth, area;
    char message[] = "Area of Rectangle = ";
    int i;

    printf("Enter length and breadth: ");
    scanf("%d%d", &length, &breadth);

    area = length * breadth;

    for (i = 0; message[i] != '\0'; i++) {
        putchar(message[i]);
    }

    printf("%d\n", area);

    return 0;
}
