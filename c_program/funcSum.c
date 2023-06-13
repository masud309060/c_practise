#include <stdio.h>

double add(double num1, double num2);

int main() {
    double a, b, c;

    a = 20;
    b = 21.56;
    c = add(a, b);

    printf("sum of c = %0.2lf", c);
    return 0;
}

double add(double num1, double num2) {
    double sum = num1 + num2;

    return sum;
}
