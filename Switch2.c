#include <stdio.h>

int main(void)
{
    int numbers[5] = {10, 20, 30, 40, 50};
    int choice;

    printf("Array elements:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", numbers[i]);
    }

    printf("\n\nChoose an array element (1-5): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Selected element: %d\n", numbers[0]);
            break;
        case 2:
            printf("Selected element: %d\n", numbers[1]);
            break;
        case 3:
            printf("Selected element: %d\n", numbers[2]);
            break;
        case 4:
            printf("Selected element: %d\n", numbers[3]);
            break;
        case 5:
            printf("Selected element: %d\n", numbers[4]);
            break;
        default:
            printf("Invalid choice.\n");
    }

    return 0;
}