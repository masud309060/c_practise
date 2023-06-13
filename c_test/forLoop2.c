#include <stdio.h>

int main() {
    int n, m, i;

    printf("Enter the multiplier: _ \n");
    scanf("%d", &n);

    m = 0;
    for(i = 1; i <= 10; i++) {
        m = m + n; // if n = 5 then m = 5, 10, 15,
        printf("%d x %d = %d \n", n, i, m);
    }

    return 0;
}
