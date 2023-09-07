
#include <stdio.h>

int linear_search(int arr[], int size, int target) {
    int targetIndex = -1;
    int i;

    for(i = 0; i < size; ++i) {
        if(arr[i] == target) {
            targetIndex = i;
            break;
        }
    }

    return targetIndex;
}

int main() {
    int myArr[] = {2, 4, 6, 3, 3, 5, 6, 9, 10, 34, 56, 34, 22};
    int result;

    result = linear_search(myArr, sizeof(myArr)/sizeof(myArr[0]), 22);

    printf("Result = %d", result);


    return 0;
}
