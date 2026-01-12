// ? Use the switch statement to create a program that will the month based on the number input. 

#include <stdio.h>

int main(){
    int number;
    printf("Enter a Number (1-12): ");
    scanf("%d", &number);

    switch (number)
    {
    case 1:
        printf("January");
        break;

    case 2:
        printf("Feburary");
        break;

    case 3:
        printf("March");
        break;

    case 4:
        printf("April");
        break;

    case 5:
        printf("May");
        break;

    case 6:
        printf("June");
        break;

    case 7:
        printf("July");
        break;

    case 8:
        printf("August");
        break;

    case 9:
        printf("September");
        break;

    case 10:
        printf("October");
        break;

    case 11:
        printf("November");
        break;

    case 12:
        printf("December");
        break;

    
    default:
        printf("Invalid Number, Enter a number between 1-12");
    }


    return 0;
}