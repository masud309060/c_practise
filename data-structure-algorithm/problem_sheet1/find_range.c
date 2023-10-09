// Find Range: Find the range (difference between the maximum and minimum) of an array.

#include <stdio.h>

int main()
{
    int arr[] = {6, 8, 9, 3, 5, 11, 23, 11, 12, 4};

    int size = sizeof(arr)/ sizeof(int);
    int max = arr[0];
    int min = arr[0];

    for (int i = 1; i < size; i++)
    {
        if(arr[i] > max) {
            max = arr[i];
        }

        if(arr[i] < min) {
            min = arr[i];
        }
    }

    int range = max - min;

    printf("Range: %d \n", range);    

    return 0;
}