#include <stdio.h>
#include <string.h>
#include <math.h>


int main() {
    char bin[10], len, decimal, power, i;

    printf("Enter the binary number: ");
    scanf("%s", bin);

    decimal = 0;
    len = strlen(bin);

    power = len - 1;

    for(i = 0; i < len; i++) {

        decimal = decimal + pow(2, power);
        power--;
    }

    printf("Decimal value = %d", decimal);

    return 0;
}
