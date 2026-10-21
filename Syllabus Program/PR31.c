//Program No. 31: Program to Multiply Two Numbers Using Pointers
#include <stdio.h>

int main() {
    int a, b;
    int *p = &a, *q = &b;

    printf("Enter two integers: ");
    scanf("%d%d", &a, &b);

    printf("Product = %d\n", (*p) * (*q));

    return 0;
}
