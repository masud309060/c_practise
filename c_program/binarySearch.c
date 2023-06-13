#include <stdio.h>

int main() {
    int numbers[] = { 1, 4, 6, 8, 9, 11, 14, 15, 20, 21, 22, 23, 24, 26, 30, 32 };
    int low_index = 0;
    int high_index = 15;
    int mid_index;
    int num = 5;

    while(low_index <= high_index) {

         mid_index = (low_index + high_index) / 2;

         printf("mid value index = %d, mid value = %d, number = %d \n", mid_index, numbers[mid_index], num);

         if(numbers[mid_index] == num) {
            break;
         } else if(num > numbers[mid_index]) {
            low_index = mid_index + 1;
         } else {
            high_index = mid_index - 1;
         }

    };

    if(low_index == high_index) {
        printf("%d is not found in our numbers array", num);
    } else {
        printf("%d is found on array. it is the %d th element of the array", numbers[mid_index], mid_index + 1);
    }

    return 0;
};
