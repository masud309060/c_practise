#include <stdio.h>

int main() {
    int i, n, sum;

    printf("Enter the n term of even number = ");
    scanf("%d", &n);

    sum = n * (n + 1);

    // sum = 0;

    /*

    for(i = 0; i <= n; i = i + 2) {
        sum = sum + i;
        printf("sum of i = %d \n", sum);
    }

    */

    printf("Summation of n number of even number = %d", sum);
    return 0;
}
