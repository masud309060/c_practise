#include <stdio.h>
#include <math.h>


int is_prime(int n) {
    int i;
    double root;

    if(n < 2) {
        return 0;
    }

    if(n == 2) {
        return 1;
    }

    if(n % 2 == 0) {
        return 0;
    }

    root = sqrt(n);

    for(i = 3; i < root; i = i+2) {
        if(n % i == 0) {
            return 0;
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


