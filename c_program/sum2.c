#include <stdio.h>

int main()
{
    int a;
    double x;

    x = 10.5;
    a = (int)x;

    printf("value of x is %2lf \n", x);
    printf("value of a is %d \n", a);

    a = 1000;
    printf("Value of a is %d \n", a);

    a = -1000;
    printf("Value of a is %d \n", a);


    a = 2147483647;
    printf("Value of a is %d \n", a);

    a = -1000;
    printf("Value of a is %d \n", a);

    // 1 byte = 8 bit;

    double m = 10.201, n = 3.123, sum;

    sum = m + n;

    printf("sum is == %lf \n", sum);
    printf("sum is === %0.3lf \n", sum);



    return 0;
}
