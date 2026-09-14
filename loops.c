#include<stdio.h>
double main(){
printf("\nStar Pattern 1\n");
/*
 *  *  *  *  *  *
 *  *  *  *  *  *
 *  *  *  *  *  *
 *  *  *  *  *  *
 *  *  *  *  *  *
 *  *  *  *  *  *   
 */    
  
for(int i = 0; i <= 5; i++){
        for(int j = 0;j <= 5; j++){
            printf(" * ");
        }
        printf("\n");
    }

printf("\nStar Pattern 2\n");
/*
 *
 *  *
 *  *  *
 *  *  *  *
*/

for(int i=1; i <= 4; i++){
    for(int j = 1; j <= i; j++){
        printf(" * ");
    }
    printf("\n");
}

printf("\nStar Pattern 3\n");
    // This loop for traverse pyramid from top to bottom
    int Rows = 5;
    for (int i = 0; i < Rows; i++)
    {

        // This loop for printing leading whitespaces
        for (int j = 0; j < 2 * (Rows - i) - 1; j++)
        {
            printf(" ");
        }

        // This loop for printing * character in each row
        for (int k = 0; k <= i; k++)
        {
            printf("* ");
        }
        printf("\n");
    }

    printf("\nStar Pattern 4\n");
    
    // This loop to print all rows
    int rows;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    for (int i = 0; i < rows; i++){

    // Inner loop 1 to print white spaces for each row
        for(int j = 0; j < 2 * (rows - i) -1; j++){
            printf(" ");
        }

    // Innner loop 2 to print star for each row
    for(int k = 0; k < 2 * i + 1; k++){
        printf("* ");
    }
    printf("\n");
}
return 0;
}