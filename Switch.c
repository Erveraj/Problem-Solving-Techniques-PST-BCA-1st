    #include <stdio.h>
    int main(){
    printf("Select Your Choice:\n");
    printf("=================================================\n");
    printf("1. Size of int\n");
    printf("2. Size of float\n");  
    printf("3. Size of double\n");
    printf("4. Size of char\n");
    printf("=================================================\n");
    int choice;
    scanf("%d", &choice);
    switch(choice){
        case 1:
            printf("Size of int = %zu bytes\n", sizeof(int));
            break;
        case 2:
            printf("Size of float = %zu bytes\n", sizeof(float));
            break;
        case 3:
            printf("Size of double = %zu bytes\n", sizeof(double));
            break; 
        case 4:
            printf("Size of char = %zu byte\n", sizeof(char));
    }
    printf("=================================================\n");
}
    