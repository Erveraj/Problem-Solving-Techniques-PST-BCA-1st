#include <stdio.h>

int main() {

    printf("Numerical 2D Array\n");

    int arr[4][4]={
    {1,2,3,4},
    {5,6,7,8},
    {9,10,11,12},
    {13,14,15,16}
};
    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){
            printf("| %d | ",arr[i][j]);
        }
        printf("\n");
    }

    printf("\n\nCharacter 2D Array\n");
    char charArr[4][4] = {
        {'A', 'B', 'C', 'D'},
        {'E', 'F', 'G', 'H'},
        {'I', 'J', 'K', 'L'},
        {'M', 'N', 'O', 'P'}
    };
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("| %c | ", charArr[i][j]);
        }
        printf("\n");
    }

}