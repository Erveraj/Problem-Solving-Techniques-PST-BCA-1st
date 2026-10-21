//Program No. 9: Program to Find Simple Interest
#include <stdio.h>

int main() {
    float amount, rate, time, interest;

    printf("Enter amount, rate and time in years: ");
    scanf("%f%f%f", &amount, &rate, &time);

    interest = (amount * rate * time) / 100;

    printf("Simple Interest = %.2f\n", interest);

    return 0;
}
