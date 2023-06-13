#include <stdio.h>


int getFactorial (int number) {
    if(number == 0) {
        return 1;
    } else {
        return number * getFactorial(number - 1);
    }
}

int main() {
    int n, fact;

    printf("Enter a factorial number: ");
    scanf("%d", &n);

    fact = getFactorial(n);

    printf("Result: %d \n", fact);
    return 0;
}

