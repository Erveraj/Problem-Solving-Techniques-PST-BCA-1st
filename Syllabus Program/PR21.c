//Program No. 21: Program to Check Whether a Number Is Prime
#include <stdio.h>

int main() {
    int n, i, isPrime = 1;

    printf("Enter an integer: ");
    scanf("%d", &n);

    if (n < 2)
        isPrime = 0;

    for (i = 2; i <= n / i && isPrime; i++) {
        if (n % i == 0)
            isPrime = 0;
    }

    if (isPrime)
        printf("%d is a prime number.\n", n);
    else
        printf("%d is not a prime number.\n", n);

    return 0;
}
