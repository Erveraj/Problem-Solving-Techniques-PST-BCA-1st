//Program No. 22: Program Using a Function to Find the Largest of Three Numbers
#include <stdio.h>

int largest(int a, int b, int c) {
    if (a >= b && a >= c)
        return a;
    else if (b >= c)
        return b;
    else
        return c;
}

int main() {
    int a, b, c;

    printf("Enter three numbers: ");
    scanf("%d%d%d", &a, &b, &c);

    printf("Largest number = %d\n", largest(a, b, c));

    return 0;
}
