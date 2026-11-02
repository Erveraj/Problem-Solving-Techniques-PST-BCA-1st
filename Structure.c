#include <stdio.h>

struct Person{
    int age;
    char name[30];
    char gender[10];
};
int main() {
  struct Person p1;
    printf("Enter Your Gender: ");
    scanf("%s",&p1.gender);
    printf("Enter Your Age: ");
    scanf("%d", &p1.age);
    printf("Enter Your Name: ");
    scanf("%s", &p1.name);

    printf("Your Gender: %s\n", p1.gender);
    printf("Your Age: %d\n", p1.age);
    printf("Your Name: %s\n", p1.name);
}