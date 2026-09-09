#include<stdio.h>

void rept(a){
    if(a>=18){
        printf("Adult");
    }
    else{
        printf("Child");
    }
}
int main(){
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);
    /*if(age>=18){
        printf("Adult");
    }
    else{
        printf("Child");
    }*/
    rept(age);
    return 0;
}