#include <stdio.h>


int main() {
    int arr[5][5] = {
        {6, 4, 7, 8, 9},
        {3, 7, 8, 9, 9},
        {8, 6, 4, 2, 7},
        {2, 4, 2, 5, 9},
        {4, 1, 6, 7, 3}
    };

    int sum_of_row, sum_of_col, row, col;



    for(row = 0; row < 5; row++) {
        sum_of_row = 0;
        sum_of_col = 0;

        for(col = 0; col < 5; col++) {
            sum_of_row = sum_of_row + arr[row][col];
            sum_of_col = sum_of_col + arr[col][row];
        }

        printf("sum of row %d = %d \n", row + 1, sum_of_row);
        printf("sum of col %d = %d \n", row + 1, sum_of_col);
    }


    return 0;
}
