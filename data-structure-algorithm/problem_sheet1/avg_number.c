#include <stdio.h>

// Calculate the Average: Calculate the average of all elements in an array
float findAverageNumber(int arr[], int size)
{
    int i;
    float sum = 0;

    for (i = 0; i < size; i++)
    {
        sum += arr[i];
    }

    return sum / size;
};

int main()
{
    int numbers[] = {3, 3, 3, 6, 7, 5, 5};
    int size = sizeof(numbers) / sizeof(int);

    float avg = findAverageNumber(numbers, size);

    printf("Average: %0.3f \n", avg);
    return 0;
}