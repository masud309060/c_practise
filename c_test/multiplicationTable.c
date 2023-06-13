#include <stdio.h>

int main() {
    int n, i, j, m;
    printf("Multiplication Table from 1 to __? \n");
    scanf("%d", &n);
    printf("-----------------\n");

    for(i = 1; i <= n; i++) {

        m = 0;
        for(j = 1; j <= 10; j++) {
            m = m + i;
            printf("%d x %d = %d \n", i, j, m);
        }
        printf("----------------\n");
    }


    return 0;
}
