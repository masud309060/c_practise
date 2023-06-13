// Write a C Program to Find the Size of int, float, double and char
#include <stdio.h>


int main() {
    int intType;
    float floatType;
    double doubleType;
    char charType;

    printf("The size of int: %zu bytes \n", sizeof(intType));
    printf("The size of float: %zu bytes \n", sizeof(floatType));
    printf("The size of double: %zu bytes \n", sizeof(doubleType));
    printf("The size of char: %zu bytes \n", sizeof(charType));

    return 0;
}
