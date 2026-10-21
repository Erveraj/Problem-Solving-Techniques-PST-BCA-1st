//Program No. 36: Program to Save Employee Details in a File Using File Handling
#include <stdio.h>

int main() {
    FILE *fp;
    int id;
    char name[50];
    float salary;

    printf("Enter employee ID: ");
    scanf("%d", &id);

    printf("Enter employee name: ");
    scanf(" %49[^\n]", name);

    printf("Enter employee salary: ");
    scanf("%f", &salary);

    fp = fopen("employee.txt", "w");

    if (fp == NULL) {
        printf("Could not create employee.txt.\n");
        return 1;
    }

    fprintf(fp, "Employee ID: %d\n", id);
    fprintf(fp, "Employee Name: %s\n", name);
    fprintf(fp, "Employee Salary: %.2f\n", salary);

    fclose(fp);

    printf("Employee details saved to employee.txt.\n");

    return 0;
}
