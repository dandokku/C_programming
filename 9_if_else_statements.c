#include <stdio.h>

int main() {

    /* 

    if (test_condition) {
    
        body of if statement
    }
    
    */

    //! A program to check the age eligibility of voters
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);

    if(age >= 120 || age < 0){
        printf("\n WTF");
    } else if (age >=10){
        printf("You are eligible to vote");
    } else
    {
        printf("You are not eligible to vote");
    }
     











    
    return 0;
}