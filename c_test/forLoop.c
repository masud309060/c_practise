#include <stdio.h>

int main() {
    int n, i;

    printf("Enter the multiplier: _ \n");
    scanf("%d", &n);

    i = 1;
    for(; i;) {

        printf("%d x %d = %d \n", n, i, n*i);
        i++;
        if(i > 10) break;
    }

    return 0;
}
