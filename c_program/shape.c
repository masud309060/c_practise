#include <stdio.h>

int main() {
    int i, j;


    for(i = 0; i < 10; i++) {
        for(j = 0; j < 10 - i; j++) {
            printf("c");
        }
        printf("\n");
    }


    for(i = 0; i < 10; i++) {
        for(j = 10; j >= 10 - i; j--) {
            printf("c");
        }
        printf("\n");
    }


    return 0;
}
