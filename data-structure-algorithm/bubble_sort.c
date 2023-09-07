#include <stdio.h>

int main() {
    int size = 7, i, j, temp;
    int numbers[7] = {3, 5, 8, 2, 3, 4, 9};

    for(i = 0; i < size -1; ++i) {

         for(j=0; j < size - 1 - i; ++j) {
                printf("%d %d \n", numbers[j + 1], numbers[j]);
                if(numbers[j + 1] < numbers[j]) {
                temp = numbers[j];
                numbers[j] = numbers[j+1];
                numbers[j+1] = temp;
            }
         }

    }



    for(i = 0; i < size; ++i) {
        printf("%d ", numbers[i]);
    }


    return 0;
}

