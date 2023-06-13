#include <stdio.h>


int main()
{
    double num1, num2, sum, differ, multiply, divide;
    char sign;

    printf("Please enter a number: ");
    scanf("%lf", &num1);

    printf("Please enter another number: ");
    scanf("%lf", &num2);

    sum = num1 + num2;
    differ = num1 - num2;
    multiply = num1 * num2;

        printf("%0.2lf + %0.2lf = %0.2lf \n", num1, num2, sum);
    printf("%0.1lf - %0.1lf = %0.1lf \n", num1, num2, differ);
    printf("%lf * %lf = %0.2lf \n", num1, num2, multiply);

    sign = '/';
    divide = num1 / num2;


    printf("%lf %c %lf = %0.2lf \n", num1, sign, num2, divide);


}
