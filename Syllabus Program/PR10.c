//Program No. 10: Program to Calculate Net Salary
#include <stdio.h>

int main() {
    float basic, da, hra, gross, pf, net;

    printf("Enter basic salary: ");
    scanf("%f", &basic);

    da = basic * 0.25;
    hra = basic * 0.15;
    gross = basic + da + hra;
    pf = gross * 0.10;
    net = gross - pf;

    printf("Basic Salary = %.2f\n", basic);
    printf("DA = %.2f\n", da);
    printf("HRA = %.2f\n", hra);
    printf("Gross Salary = %.2f\n", gross);
    printf("Provident Fund = %.2f\n", pf);
    printf("Net Salary = %.2f\n", net);

    return 0;
}
