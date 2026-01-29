#include <stdio.h>

int main(){
    int count = 1;



    while (count < 5){
        printf("\nWhile loop in C");
        printf("Count = %d", count);
        count = count + 1;
    }

    
    int number;
    printf("\nEnter the number, ejorwhi: ");
    scanf("%d", &number);

    int count2 = 1;
    while (count2 <= 10){
        int product = number * count2;
        printf("%d\n", number, "*", count2, "=", product);
        count2 = count2 + 1;
    }

    return 0;
}