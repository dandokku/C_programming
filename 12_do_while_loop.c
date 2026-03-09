#include <stdio.h>

int main() {

    int count = 1;

    do {
        printf("%d\n", count);
        count++;
    } while (count < 5);

    //? Why does count < 5 print 1-4, and count <= prints 1-5
    //* I see it now, count < 5 checks if count is less than 5, and that's why it's printing 1-4, because 5 isn't less than 5.

    // int number;
    // printf("Enter a Number: ");
    // scanf("%d", &number);

    // int count = 10;

    // do {
    //     int product = number * count;
    //     printf("%d*%d=%d\n", number, count, product);
    //     count--;
    // } while (count >= 1);

    return 0;
}