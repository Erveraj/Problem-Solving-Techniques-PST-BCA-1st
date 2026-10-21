// Program no 2: WRITE A PROGRAM to add two numbers. 
#include<stdio.h>
int main(){
    //Method no 1 Without using scanf() function.
    int a=10,b=50;
    printf("Sum of a and b is: %d\n",a+b);

    //Method no 2 Using scanf() function.
    int x,y;
    printf("Enter Value of x: ");
    scanf("%d",&x);
    printf("Enter Value of y: ");
    scanf("%d",&y);
    printf("X = %d\ny = %d\nSum of x and y is: %d",x,y,x+y);
}