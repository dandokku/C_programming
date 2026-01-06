#include <stdio.h>

int main(){
    //? User Input: using scanf() to get input from the user}
    // int age;
    // printf("Enter your age: ");
    // scanf("%d", &age); 
    // printf("Age = %d", age);


    double number;
    char alphabet;

    // printf("Enter double input: ");
    // scanf("%lf", &number);

    // printf("Enter character input: ");
    // scanf("\n%c", &alphabet);

    
    //? taking multiple inputs
    
    // printf("Enter input values: ");
    // scanf("%lf %c", &number, &alphabet);
    
    // printf("Number: %lf", number);
    // printf("\nCharacter: %c", alphabet);
    
    int num;
    float num2;

    printf("Enter Input Values(Int and Float): ");
    scanf("%d %f", &num, &num2);
    printf("\nInt: %d", num);
    printf("\nFloat: %f", num2);

    return 0;

}