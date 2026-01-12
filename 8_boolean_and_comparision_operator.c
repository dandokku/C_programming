#include <stdio.h>
#include <stdbool.h> //? boolean package

int main()
{
    bool value1 = true;
    bool value2 = false;

    //? we use format specifier %d for boolean values because they are represented in integers: true = 1, false = 0
    printf("%d", value1, value2); // TODO: find out why it only prints the first value

    /* COMPARISON OPERATORS: they all return boolean values and where they are used is called boolean expressions.
    > greater than
    < less than
    == equal to
    >= greater than or equal to
    <= less than or equal to
    != not equal to
    */
    //    bool value = (12 > 9);
    //    bool value = (12 < 9);
    //    bool value = (12 == 9);
    //    bool value = (12 != 9);
    //    bool value = (12 >= 9);
    bool value = (12 <= 9);

    printf("\n%d", value);

    //? comparision between variables
    int num1 = 9, num2 = 4;
    bool compareNum = num1 > num2;
    printf("\n%d", compareNum);

    /* LOGICAL OPERATORS:
    && AND
    || OR
    ! NOT
    */

    int age = 18;
    double height = 6.3;

    //! will return true only if both expressions are true; 
    // bool checkIf = (age >= 15) && (height > 6.0); 
    
    //! will return true if one of the expressions are true; 
    // bool checkIf = (age >= 15) || (height > 6.0); 

    //! the not operator simply reverses the result of the boolean expression, true  = false, false = true
    bool checkIf = !(age >= 1);  


    printf("\n%d", checkIf);

    return 0;
}