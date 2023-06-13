// Write a C Program to Compute Quotient and Remainder.

#include <stdio.h>

int main () {
    int dividend, divisor, quotient, remainder;

    printf("Enter divident: ");
    scanf("%d", &dividend);

    printf("Enter divisor: ");
    scanf("%d", &divisor);

    quotient = dividend / divisor;
    remainder = dividend % divisor;

    printf("Quotiend: %d \n", quotient);
    printf("Remainder: %d \n", remainder);

    return 0;
}
