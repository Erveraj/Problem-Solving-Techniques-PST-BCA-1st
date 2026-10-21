//Program No. 23: Program Using a Function to Print the First 20 Numbers and Their Squares
#include <stdio.h>

void printSquares(void) {
    int i;

    for (i = 1; i <= 20; i++) {
        printf("%d - Square = %d\n", i, i * i);
    }
}

int main() {
    printSquares();
    return 0;
}
