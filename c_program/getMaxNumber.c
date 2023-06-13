#include <stdio.h>

int getMaxNumber(int arr[], int n) {

    int max = arr[0];
    int i;

    for(i = 1; i < n; i++) {
        if(arr[i] > max) {
            max = arr[i];
        }
    }

    return max;
}

int getMinNumber(int arr[], int n) {
    int min = arr[0];
    int i;
    for(i = 1; i < n; i++) {
        if(arr[i] < min) {
            min = arr[i];
        }
    }

    return min;

}

int main() {
    int numbers[5] = {5, 3, 20, 12, 26};
    int n = 5;

    int maxValue = getMaxNumber(numbers, n);
    int minValue = getMinNumber(numbers, n);


    printf("max value is %d \n", maxValue);
    printf("min value is %d", minValue);

    return 0;
}
