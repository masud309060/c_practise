// Write a C program to Check Whether a Number is Positive
// or Negative or Zero.
#include <stdio.h>

int main() {
    int num;

    printf("Enter an integer: ");
    scanf("%d", &num);

    // true if num is perfectly divisible by 2
    if(num > 0) {
        printf("The number %d is positive.", num);
    } else if(num < 0) {
        printf("The number %d is negative.", num);
    }

    else {
        printf("The number %d is Zero.", num);
    }

    return 0;
}
