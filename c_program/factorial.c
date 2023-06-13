#include <stdio.h>


int main() {
    int n, fact, i;

    printf("Enter a number: ");
    scanf("%d", &n);

    if(n == 0 || n == 1) {
        fact = 1;

    } else {
        fact = 1;

        for(i = 2; i <= n; i++) {

            fact = fact * i;
        }
    }

    printf("%d ! = %d", n, fact);

    return 0;
}
