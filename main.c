#include <stdio.h>

int main() { //? the main function, every C program starts from this function
    // printf("Hello World");
    
    int age = 25; //? variable declaration and initialization

    printf("Age: %d", age);

    // ? variable values can be changed
    age = 31;
    printf("\nNew age is %d", age);

    // ? We can assign the values of a variable to another variable
    int firstNumber = 33;
    int secondNumber = firstNumber;
    printf("\n The second number is %d", secondNumber);

    // ? Declaring multiple variables at once
    int variable1, variable2 = 25; //! variable1 will have a random value or 0, it has no explicit value beacuse the value was assigned to varaible2
    //! do declare multiple variables at once you can use comma-saparated initialization
    int variableA = 10, variableB = 20, variableC = 30;
    //! or use chained assignment after declaration
    int varX, varY;
    varX = varY = 50;

    //* Guess the Output
    printf("\n %d", firstNumber);
    printf("%d", firstNumber);

    return 0;
}
