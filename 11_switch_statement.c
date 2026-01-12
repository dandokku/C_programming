#include <stdio.h>

int main()
{
    //? Switch case is a glorified if...else statement

    //* A program to return the day of the week
    int number;
    printf("Enter a number between 1-7: ");
    scanf("%d", &number);

    /*
   switch(number){
        case 1:
        printf("Sunday");
        break;

        case 2:
        printf("Monday");
        break;

        case 3:
        printf("Tuesday");
        break;

        case 4:
        printf("Wedday");
        break;

        case 5:
        printf("Thursday");
        break;

        case 6:
        printf("Friday");
        break;

        case 7:
        printf("Saturday");
        break;

        default:
        printf("Invalid Number");
}
        */

    //! If you don't include the break statement, it'll run all the codes in the blocks

    //* there are cases where you want to run multple expressions at once

    switch (number)
    {
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
        printf("Weekday");
        break;

    case 1:
    case 7:
        printf("Weekend");
        break;

    default:
        printf("Invalid Number");
    }

    return 0;
}