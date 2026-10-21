//Program No. 11: Program to Find Area of a Circle Using PI as a Constant
#include <stdio.h>

int main() {
    float radius, area;
    const float PI = 3.14159f;

    printf("Enter radius: ");
    scanf("%f", &radius);

    area = PI * radius * radius;

    printf("Area of Circle = %.2f\n", area);

    return 0;
}
