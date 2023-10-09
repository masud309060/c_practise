// Sort Array: Sort the elements of an array in ascending order.

#include <stdio.h>

void printArrElement(int arr[], int size)
{

    printf("\n------------------------------\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n------------------------------\n");
}

void ascendingOrder(int arr[], int size)
{
    int temp;

    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

void discendingOrder(int arr[], int size)
{
    int temp;

    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] < arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}


int main()
{
    int arr[] = {3, 5, 2, 1, 8, 6, 9, 0};

    int size = sizeof(arr) / sizeof(int);

    // ascending Order
    // asecendingOrder(arr, size);

    // discending Order
    discendingOrder(arr, size);

    printArrElement(arr, size);

    return 0;
}