#include <stdio.h>

int main() {
    int n = 1, m;

    printf("Multiplier number __ ? \n");
    scanf("%d", &m);

    while(n <= 10) {

        if(n > 5) break;

        printf("%d x %d = %d\n", m, n, m*n);
        n++;
    }

    return 0;
}
