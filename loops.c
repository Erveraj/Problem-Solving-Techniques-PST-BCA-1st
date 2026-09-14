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
    int rows = 5;
    for (int i = 0; i < rows; i++)
    {

        // This loop for printing leading whitespaces
        for (int j = 0; j < 2 * (rows - i) - 1; j++)
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
}