#include <stdio.h>


// 6. Find and print all the duplicate element of an array.
int main() {
    int arr[] = { 5, 6, 5, 6, 7, 8, 9, 9};
    int i, j;
    int size = sizeof(arr) / sizeof(arr[0]);

    for(i = 0; i < size; i++) {
        for(j = i + 1; j < size; j++) {
            if(arr[i] == arr[j]) {
                printf("%d ", arr[i]);
                break;
            }
        }
    }




    return 0;
}
