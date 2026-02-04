#include <stdio.h>

int main() {
    // printing zero to one 
    for (int i = 0; i < 3; i++){
        printf("I got rejected! \n");
    }

    //! Getting the sum of numbers 1-100
    //* First Declare Sum
    int sum = 0; 

    for (int number = 1; number <= 100; number++){
        sum = sum + number;
        printf("%d\n", sum);

    }

    return 0;
}