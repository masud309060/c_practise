#include <stdio.h>

int main()
{
    double x, y, x_plus_y, x_minus_y;

    printf("Enter the value of x + y =  ");
    scanf("%lf", &x_plus_y);

    printf("Enter the value of x - y = ");
    scanf("%lf", &x_minus_y);

    x = (x_plus_y + x_minus_y)  / 2;
    y = (x_plus_y - x_minus_y) / 2;

    printf("The value of x = %0.3lf, y = %0.2lf", x, y);

    return 0;

}
