#include <stdio.h>

int main() {

    int x = 0, y = 0, result = 0;
    char sign;

    printf("Please enter a number: ");
    scanf("%d", &x);
    printf("Please enter another number: ");
    scanf("%d", &y);

    result = x + y;
    sign = '+';
    printf("%d %c %d = %d \n", x, sign, y, result);

    result = x - y;
    sign = '-';
    printf("%d ­%c %d = %d \n", x, sign, y, result);

    result = x % y;
    sign = '%';
    printf("%d %c %d = %d \n", x, sign, y, result);

    result = x / y;
    sign = '/';
    printf("%d %c %d = %d \n", x, sign, y, result);


    return 0;
}
