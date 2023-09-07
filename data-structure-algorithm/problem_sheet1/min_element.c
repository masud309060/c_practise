#include <stdio.h>

// Find the Minimum Element: Find the minimum element in an array.
int findMin(int arr[], int size)
{
    int i, min = arr[0];

    for (i = 1; i < size; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }

    return min;
}

int main()
{
    int numbers[] = {2, 4, 8, 3, 4, 2, 1, 6, 7};
    int size = sizeof(numbers) / sizeof(int);

    int minElement;

    minElement = findMin(numbers, size);

    printf("Minimum Element: %d", minElement);

    return 0;
}