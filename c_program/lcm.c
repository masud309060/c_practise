#include <stdio.h>

int main() {
    int a, b, x, lcm;

    scanf("%d %d", &a, &b);

    if(a > b) {
        x = b;
    } else {
        x = a;
    }

    for(; x >= 1; x--) {

        if(a % x == 0 && b % x == 0) {
            lcm = x;
            break;
        }
    }

    printf("LCM is %d", (a * b) / lcm);

    return 0;
}
