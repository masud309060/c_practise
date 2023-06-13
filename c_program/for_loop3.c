#include <stdio.h>

int main()
{
    int a, i;
    // int m;

    for(a = 1; a <= 20; a++) {
        //m = 0;

        for(i= 1; i <= 10; i++) {
        // m = m + a;
            printf("%d x %d = %d \n", a, i, a*i);
        }

        printf("------------------------ \n");
    }
}
