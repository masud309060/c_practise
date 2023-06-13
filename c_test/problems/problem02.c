// Write a C Program to Compute Quotient and Remainder.
#include <stdio.h>


int main() {

    int divident, divisor, quotient, remainder;

    printf("Enter the value of Divident: ");
    scanf("%d", &divident);

    printf("Enter the value of Divisor: ");
    scanf("%d", &divisor);

    remainder =  divident % divisor;
    quotient = (divident - remainder) / divisor;

    printf("Quotient: %d, Remainder: %d", quotient, remainder);


    return 0;
}
