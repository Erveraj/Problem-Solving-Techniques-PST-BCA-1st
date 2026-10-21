//Program No. 33: Program to Show Memory Occupied by Structure and Union
#include <stdio.h>

struct Student {
    int id;
    float marks;
    char grade;
};

union Data {
    int id;
    float marks;
    char grade;
};

int main() {
    printf("Size of structure = %zu bytes\n", sizeof(struct Student));
    printf("Size of union = %zu bytes\n", sizeof(union Data));

    return 0;
}
