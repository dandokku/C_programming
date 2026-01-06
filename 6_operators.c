#include <stdio.h>

int main(){
    //* Arithmetic Operators: + - * / %(remainder, modulus) ++(incremental) --(decremental)
    int x = 2, y = 3;
    int result = x + y;
    printf("%d", result);

    double xy = 12.55;
    int yx = 1.5;
    
    printf("\n%lf", xy+yx);



    // ! Division Operator, so when dividing things that doesnt have remainders, using int works, but if it does, it'll return 1, the quotient/remainder of the operation.
    //! so it's best to use double

    double xxy = 20.00;
    double results = xxy/6.00;

    printf("\n%lf", results);


    // ! the remainder operator can only be used with int data type
    int yxx = 12;
    int result3 = yxx%5;
    printf("\n%d", result3);


    // ! Increment and Decrement Operator
    int increaseOrDecrease = 5;
    // printf("\n%d", ++increaseOrDecrease);
    printf("\n%d", --increaseOrDecrease);


    //! Using multiple operators in a single expression
    int multipleOperations = 10 / 2 + 5 * 2 - 1;
    printf("\n%d", multipleOperations);
    //TODO: Study Precendence and Association

    return 0;
}