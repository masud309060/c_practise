//  Remove Specific Element: Given an array and a specific element, remove all occurrences of that element from the array.

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

int main()
{
    // given array
    int arr[] = {2, 4, 8, 3, 4, 4, 6, 7, 6, 8};
    int element = 6;

    // calculate the array size
    int size = sizeof(arr) / sizeof(int);
    int totalElement = 0;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == element)
            totalElement++;
    }

    // lets,
    int newArrSize = size - totalElement;
    int newArr[newArrSize];

    // iterate old array elements and copy all the element which is not equal removable element
    for (int i = 0, j = 0; i < size; i++)
    {
        if (arr[i] != element)
        {
            // after fillup j index value, increase it's index value 1
            newArr[j] = arr[i];
            j++;
        }
    }

    printArrElement(newArr, newArrSize);

    return 0;
}