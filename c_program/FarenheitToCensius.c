#include <stdio.h>

int main() {
    double cel, far;

    printf("Enter the temperature in Farenheit: ");
    scanf("%lf", &far);

    cel = (far - 32) * 5 / 9;

    printf("Celsius is %0.2lf", cel);
}
