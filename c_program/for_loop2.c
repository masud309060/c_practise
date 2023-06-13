#include <stdio.h>

int main()
{
    int a = 9, i;
    int m = 0;

    for(i = 1; i <= 10; i++) {
    m = m + a;

    printf("==> %d x %d = %d \n", a, i, m);

    }
}
