#include <stdio.h>


int main() {
    int arr1[5][5] = {
    {1, 2, 3, 4, 5}, {10, 20, 30, 40, 50},
    {100, 200, 300, 400, 500}, {1000, 2000, 3000, 4000, 5000},
    {10000, 20000, 30000, 40000,50000}
    };

    int arr2[5][5];
    int r, c;

    printf("Content of first array (arr1): \n");

    for(r = 0; r < 5; r++) {
        for(c = 0; c < 5; c++) {
            printf("%d \t", arr1[r][c]);
        }
        printf("\n");
    }


    // now copy of first array to second array;

    for(r = 0; r < 5; r++) {
        for(c = 0; c < 5; c++) {
            arr2[r][c] = arr1[c][r];
        }
    }


     printf("Content of Second array (arr2): \n");
    for(r = 0; r < 5; r++) {
        for(c = 0; c < 5; c++) {
            printf("%d \t", arr2[r][c]);
        }
        printf("\n");
    }

}
