#include <stdio.h>

int main(){
    //? Data types specifies the type of data that can be stored in a variable

    /* 
    int (4 bytes) | %d for printing    
    double (8 bytes) | %lf for printing
    float (4 bytes) | %f for printing
    char (1 byte) | %c for printing

    %d, %lf, %f, %c are format specifiers used in printf to specify the type of data being printed
    
    */

    // TODO: Find out more about the stuffs used for printing (%c, %d, etc)

    //? INT: used for storing whole numbers(integers)
    int age = 20;
    printf("%d", age);
    printf("\n%lf", age);

    //? FLOAT AND DOUBLE: used to store variables that contains decimals and exponential values
    double number = 12.75;
    float number2 = 10.9f; //! add f at the end of the value to specify that it's a float type
    printf("\n%lf", number);
    printf("\n%.2lf", number); //! using %.2lf to remove the extra zeros, 
    // TODO: find out what happens when you don't know the actual values, how do you trim the extra zeros
    // exponential numbers
    double eNumber = 5.5e6;
    printf("\n%lf", eNumber);

    //? CHAR: use this to store character values (like strings)
    char name = 'D'; //! char can only store a single character, so only the first character 'D' will be stored
    // chat name = "Daniel"; this will give an error beccause double quotes are used for strings, and you are trying to store a pointer to a string in a char variable
    
    //! double quotes are used for strings,
    //? to store multiple characters use an array of char (string)
    char fullName[] = "Daniel"; // OR
    char *fullName2 = "Daniel"; 
    // you can also specify the size of the array
    char fullName3[10] = "Daniel"; // the size of the array is 10, but only 7 bytes are used (6 for characters + 1 for null terminator), 
    // TODO: find out what happens to the remaining bytes
   
    printf("\n%c", name);
    printf("\n%s", fullName); //! use %s to print strings


    //? SIZEOF OPERATOR: used to determine the size of a data type or variable in bytes
    printf("\n size of int = %zu", sizeof(age));
    printf("\n size of double = %zu", sizeof(eNumber));

    return 0;
}