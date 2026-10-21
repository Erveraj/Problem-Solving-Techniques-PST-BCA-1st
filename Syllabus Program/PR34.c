//Program No. 34: Program to Create a Student ID Card Using a Structure
#include <stdio.h>

struct Student {
    int roll;
    char name[50];
    char course[30];
};

int main() {
    struct Student s;

    printf("Enter roll number: ");
    scanf("%d", &s.roll);

    printf("Enter student name: ");
    scanf(" %49[^\n]", s.name);

    printf("Enter course name: ");
    scanf(" %29[^\n]", s.course);

    printf("\n----- STUDENT ID CARD -----\n");
    printf("Roll Number: %d\n", s.roll);
    printf("Name: %s\n", s.name);
    printf("Course: %s\n", s.course);

    return 0;
}
