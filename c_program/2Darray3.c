#include <stdio.h>

int main() {
    int arr1[3][3] = {
        {1, 2, 3},
        {10, 20, 30},
        {33, 34, 35}
    };
    int arr2[3][3];

    int r, c;


    for(r = 0; r < 3; r++) {

         for(c = 0; c < 3; c++) {

            printf("%d \t", arr1[r][c]);
        }
        printf("\n");
    }


    printf("\n -----------------  \n");

    // copy and reverse
     for(r = 0; r < 3; r++) {
             for(c = 0; c < 3; c++) {
                arr2[c][r] = arr1[r][c];
            }
    }

      // print second array
     for(r = 0; r < 3; r++) {
             for(c = 0; c < 3; c++) {
                  printf("%d \t", arr2[r][c]);
            }
              printf("\n");
    }

    return 0;
}
