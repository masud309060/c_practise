#include <stdio.h>

int main()
{
    int a = 5, n = 1;

    while(n <= 10) {
        printf("%d x %d = %d \n", a, n, a*n);
        n++;
    }
}
