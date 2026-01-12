#include <stdio.h>

int main() {
    // test_condition ? expression1 : expression2;
    //? if the test condition is true, the first expression is carried out, else the second

    int age = 15;
    (age >= 18) ? printf("You can Vote") : printf("You can not vote");

    char operator = '+';
    int num1 = 8;
    int num2 = 7;

    int result = (operator == '+') ? (num1 + num2) : (num1 - num2);
    printf("\n%d", result);

    //! In some cases, you can replace the if...else operator with a ternary operator. It's best to use a ternary operator when you have few expressions(1 or 2).

    return 0;
}