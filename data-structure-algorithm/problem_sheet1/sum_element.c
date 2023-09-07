#include <stdio.h>

// Calculate the Sum: Calculate the sum of all elements in an array.
int findSumFromArray(int arr[], int size)
{
    int i;
    int sum = 0;

    for (i = 0; i < size; i++)
    {
        sum = sum + arr[i];
    }

    return sum;
}

int main()
{
    int numbers[] = {2, 4, 8, 3, 4, 2};
    int size = sizeof(numbers) / sizeof(int);

    int sum;
    sum = findSumFromArray(numbers, size);

    printf("Sum: %d \n", sum);

    return 0;
}