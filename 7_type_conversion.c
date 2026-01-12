#include <stdio.h>

int main(){
    char a = '5';
    int b = '9';

    int result = a + b; //! In this case, the result will be 62, because when performing arithmetic operations involving char data type, the char '5' would be converted to it's ascill value which is 53.
    printf("%d", result);

    /* the in type conversion, based on this ranking, the data type lower would be converted to the higher data type. Let's say you try to add float and int, int would be converted into float. Sometimes the higher data type can be demoted to a lower data type:

    long double
    double
    float
    long
    int
    short
    char
    */ 

    int x = 5.67;
    printf("%d", a); //? the double data would be converted into int in this case. This is called implicit type conversion.

    //? While you can forcefully convert data types, it is called explicit type conversion

    double explicitType1 = 5.67;
    int explicitType2 = 9;

    int result2 = (int)explicitType1+explicitType2;
    printf("\n Result 2: %d", result2); 

    int quiz = '8' + 12;
    printf("\n%d", quiz);

    return 0;
}