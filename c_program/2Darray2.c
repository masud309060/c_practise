#include <stdio.h>


int main() {
    int arr[4][10];
    int i, j;

    for(i = 0; i < 4; i++) {

        for(j = 0; j < 10; j++) {

            printf("%d term result of Roll %d = ", i + 1, j+1);
            scanf("%d", &arr[i][j]);
        }
    }

    return 0;
}
