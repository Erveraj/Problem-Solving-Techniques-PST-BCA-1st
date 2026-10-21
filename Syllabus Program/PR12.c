//Program No. 12: Program to Find Volume of a Cube
#include <stdio.h>

int main() {
    float side, volume;

    printf("Enter side of cube: ");
    scanf("%f", &side);

    volume = side * side * side;

    printf("Volume of Cube = %.2f\n", volume);

    return 0;
}
