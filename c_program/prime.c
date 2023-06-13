#include <stdio.h>

int is_prime(int n) {
    int i;

    if(n < 2) {
        return 0;
    }

    if(n == 2) {
        return 1;
    }

    if(n % 2 == 0) {
        return 0;
    }

    for(i = 3; i < n/2; i = i + 2) {
        if(n % i == 0) {
            return 0;
            break;
        }
    }

    return 1;
}

int main() {
    int n;

    printf("Enter a Prime Number: ");
    scanf("%d", &n);

    if(0 == is_prime(n)) {
        return printf("%d is not Prime", n);
    } else {
        return printf("%d is Prime", n);
    }

    return 0;
}
