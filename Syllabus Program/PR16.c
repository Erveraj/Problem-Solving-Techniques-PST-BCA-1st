//Program No. 16: Program to Find the Greatest of Three Numbers Using Nested if
#include <stdio.h>

int main() {
    int a, b, c, greatest;

    printf("Enter three numbers: ");
    scanf("%d%d%d", &a, &b, &c);

    if (a >= b) {
        if (a >= c)
            greatest = a;
        else
            greatest = c;
    } else {
        if (b >= c)
            greatest = b;
        else
            greatest = c;
    }

    printf("Greatest number = %d\n", greatest);

    return 0;
}
