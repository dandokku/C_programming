/*
? Create a program to check whether a number is positive or negative or 0. 

To create this program, create a variable named number and assign a double value to it based on the user input. Then using an if else statement, check if the number variable is positive or negative or 0
*/

#include <stdio.h>

int main() {
    int number;

    printf("Enter a number : ");
    scanf("%d", &number);

    if (number > 0)
    {
        printf("Positive");
    } else if (number == 0)
    {
        printf("0");
    } else {
        printf("Negative");
    }
    

    //? QUIZ
    int a = 5;
    if(!(a % 2 == 0)){
        printf("Inside If");
    } else {
        printf("Inside else");
    }

    return 0;
}