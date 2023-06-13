#include <stdio.h>

int main() {
    double celsius, farenheit;

    printf("Enter the temperature in Censius = ");
    scanf("%lf", &celsius);

    farenheit = (celsius * 9/ 5) + 32;

    printf("The temparature in Farenheit is %0.2lf", farenheit);

}
