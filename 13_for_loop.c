#include <stdio.h>

int main()
{
    // for(initialisationExpression, testExpression, updateExpression) {}

    // printing zero to one
    for (int i = 0; i < 5; i++)
    { // for starters, i is 0, now check if i is less than 5, if it is, increment i with 1.
        printf("I am Highly Favoured of the Lord! \n");
    }

    //! Getting the sum of numbers 1-100 (1 + 2 + 3 + 4 + ... 99 + 100)
    //* First Declare Sum
    int sum = 0;

    for (int number = 1; number <= 100; number++)
    {
        sum = sum + number;
        printf("%d\n", sum);
    }

    //! Getting the sum of only even numbers from 1-100
    int sum2 = 0;
    for (int number2 = 2; number2 <= 100; number2 = number2 + 2)
    {
        sum2 = sum2 + number2;
        printf("%d\n", sum2);
    }
    
    //! Getting the sum of only even numbers from 1-100
    int sum3 = 0;
    for (int number3 = 1; number3 <= 100; number3 = number3 + 2) {
        sum3 = sum3 + number3;
        printf("%d\n", sum3);
    }

        return 0;
}