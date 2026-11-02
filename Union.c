#include <stdio.h>

union Data {
    int number;
    float marks;
};

int main() {
    union Data d;

    d.number = 10;
    printf("Number: %d\n", d.number);

    d.marks = 85.5;
    printf("Marks: %.2f\n", d.marks);

    return 0;
}
