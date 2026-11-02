#include<string.h>
#include<stdio.h>
int main(){
   /* int a=20;
    printf("Value of our Variable is %d",a);
    printf("\nAddress of our Variable is %p",&a);
    int* ptr = &a;
    printf("\nValue of our Pointer is %p",ptr);
    printf("\nAddress of our Pointer is %p",&ptr);
    int* address = ptr;
    printf("\nAddress of our address Variable is %p",address);*/

    char name[30] = "Vijay";
    
    printf("Name of Student is %s",name);
    printf("\nAddress of Student is %p",&name);
    int* Varun = name;

    printf("\nVarun hold address of Vijay, %p",Varun);
    return 0;
}