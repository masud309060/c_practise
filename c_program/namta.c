#include <stdio.h>

int main() {
    int arr[10][10];
    int row, col;

    int odd=0;
    int even=0;
    int sum = 0;

    for(row = 0; row < 10; row++) {

        for(col = 0; col < 10; col++) {
            arr[row][col] = (row + 1) * (col + 1);
        }

    }

    for(row = 0; row < 10; row++) {

        for(col = 0; col < 10; col++) {

            printf("%d x %d = %d \n", row + 1, col + 1, arr[row][col]);

            sum = sum + arr[row][col];

            if(arr[row][col] % 2 == 0) {
                even++;
            } else {
                odd++;
            }
        }



        printf("---------------------- \n");
    }

    printf("Total even number = %d \n", even);
    printf("Total odd number = %d \n", odd);
    printf("Sum = %d \n", sum);


}
