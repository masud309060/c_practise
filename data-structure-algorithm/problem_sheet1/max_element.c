#include <stdio.h>

// Find the Maximum Element: Given an array, find the maximum element in it.
int findMax(int arr[], int size)
{
    int i, max = 0;

    for (i = 0; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    return max;
}

int main()
{
    int numbers[] = {2, 4, 8, 3, 4, 2, 1, 6, 7};
    int size = sizeof(numbers) / sizeof(int);

    int maxElement;

    maxElement = findMax(numbers, size);

    printf("Maximum Element: %d", maxElement);

    return 0;
}