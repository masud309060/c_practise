#include <stdio.h>

int main() {
    int i, n, sum;

    printf("Enter the value summation of n = ");
    scanf("%d", &n);
    sum = 0;

    for(i = 1; i <= n; i++) {
        sum = sum + i;
    }

    // sum = n * (n + 1) / 2;

    printf("summation =  %d", sum);
    return 0;

}
