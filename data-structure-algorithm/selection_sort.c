#include <stdio.h>

int main() {
    int size = 10, i, j, minIndex, temp;
    int numbers[10] = {3, 5, 8, 2, 3, 4, 9, 11, 14, 16};

    for(i = 0; i < size -1; ++i) {
        minIndex = i;

        for(j=i+1; j < size; ++j) {
            if(numbers[j] < numbers[minIndex]) {
                minIndex = j;
            }
        }


        if(minIndex != i) {
            temp = numbers[i];
            numbers[i] = numbers[minIndex];
            numbers[minIndex] = temp;
        }
    }


    for(i = 0; i < size; ++i) {
        printf("%d ", numbers[i]);
    }


    return 0;
}
