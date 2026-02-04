#include <stdio.h>

int main(){
    // int count = 1;

    // while (count < 5){
    //     printf("\nWhile loop in C");
    //     printf("Count = %d", count);
    //     count = count + 1;
    // }
    
    int number;
    printf("\nEnter the number: ");
    scanf("%d", &number);

    int count = 1;
    while (count <= 10){
        int product = number * count;
        printf("%d*%d = %d\n", count, product);
        count = count + 1;
    }

    return 0;
}