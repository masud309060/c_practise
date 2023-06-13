// Write a C program to swap the values of two variable.
#include <stdio.h>

int main() {
    double a, b, temp;

    printf("Enter the first number:");
    scanf("%lf", &a);


    printf("Enter the second number:");
    scanf("%lf", &b);

    temp = a;
    a = b;
    b = temp;

    printf("After swap first value = %0.1lf \n", a);
    printf("After swap second value = %0.1lf \n", b);

    return 0;
}
