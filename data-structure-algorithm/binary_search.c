#include <stdio.h>

int binary_search(int numbers[], int size, int target) {


    int start = 0;
    int end = size - 1;

    int mid;

    while(start <= end) {
        mid = (start + end) / 2;

        printf("mid: %d \n\n", mid);

        if(numbers[mid] == target) {
            return mid;
        }

        if(numbers[mid] < target) {
            start = mid + 1;
        } else {
            end = mid - 1;
        }

    }

    return -1;
}

int main() {
    int numbers[] = {1, 3, 5, 6, 7, 10, 12, 14, 16, 18, 21, 25, 32};
    int size = sizeof(numbers)/sizeof(numbers[0]);

    printf("Size:: %d \n", size);

    int index = binary_search(numbers, size, 21);

    printf("index = %d, value = %d", index, numbers[index]);

    return 0;
}
