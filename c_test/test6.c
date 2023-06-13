#include <stdio.h>

int main() {
    int n = 0;

    printf("Enter a number: __ \n");
    scanf("%d", &n);

    if(n >= 1 || n <=10) {
        printf("Print %d", n);
    } else {
        printf("Do not print %d", n);
    }

    return 0;
}
