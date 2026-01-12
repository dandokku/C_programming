#include <stdio.h>

int main(){
    char operator;
    printf("Choose an operator ['+', '-', '*', '/']: ");
    scanf("%c", &operator);

    double num1, num2;

    printf("Enter First Number: ");
    scanf("%lf", &num1);

    printf("Enter Second Number: ");
    scanf("%lf", &num2);

    double result;
    
    switch(operator){
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '/':
            result = num1 / num2;
            break;
        case '*':
            result = num1 * num2;
            break;

        default:
        printf("Invalid Number");

    }
    
    printf("\n%lf", result);




    return 0;
}