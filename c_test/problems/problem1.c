// write a program to check a year is leap year or not

#include <stdio.h>


int main() {
    int year;

    printf("Enter a year:");
    scanf("%d", &year);

    // leap year if the year perfectly divisible by 400
    if(year % 400 == 0) {
        printf("%d is a leap year \n", year);
    }

    // or not leap year if the year divisible by 100
    else if(year % 100 == 0) {
        printf("%d is not a leap year \n", year);
    }

    // leap year, when not divisible by 100 but divisible by 4

    else if(year % 4 == 0) {
        printf("%d is a leap year \n", year);
    }

    else {
        printf("%d is not a leap year", year);
    }

    return 0;
}
