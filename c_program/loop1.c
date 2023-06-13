#include <stdio.h>

int main()
{
    int n = 1;

    while(n <= 10) {

        n++;

        if(n % 2 == 0) {
            continue;
        }

        printf("%d \n", n);

        /* if(n == 8) {
            break;
        } */
    }

    return 0;
}
