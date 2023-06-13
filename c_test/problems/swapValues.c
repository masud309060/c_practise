// Write a C program to swap the values of two variable.
#include <stdio.h>

int main() {
    double num1, num2, temp;

    printf("Enter first number: ");
    scanf("%lf", &num1);

    printf("Enter second number: ");
    scanf("%lf", &num2);


    printf("Before swap, the first number: %0.2lf, and the second number: %0.2lf \n", num1, num2);


    temp = num1;
    num1 = num2;
    num2 = temp;

    printf("After swap, the first number: %0.2lf, and the second number: %0.2lf \n", num1, num2);

    return 0;
}
