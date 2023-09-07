#include <stdio.h>



int fibonacct(int n) {
    if(n <= 1) {
        return n;
    }

    return fibonacct(n - 2) + fibonacct(n - 1);
};

int main() {

    int n, i;

    printf("Enter the range of the fibonacci series: ");
    scanf("%d", &n);

    for(i= 0; i <= n; i++) {
        printf("%d ", fibonacct(i));
    }

    return 0;
}
