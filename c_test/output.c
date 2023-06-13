#include <stdio.h>

int main() {
    double a, b, sum;

    a = 9.44;
    b = 8.456;

    sum = a + b;

    printf("The value of a is %0.2lf \n", a);
    printf("The value of a is %0.5lf \n", a);
    printf("The value of a is %0.0lf \n", a);
    printf("The value of b is %lf \n", b);
    printf("%lf + %lf = %lf", a, b, sum);


    return 0;
}
