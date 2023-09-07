// Insert at a Specific Position: Given an array, an element, and an index, insert the element at the specified index, shifting other elements to the right if necessary.

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
    // given array and element
    int arr[] = {2, 16, 4, 8, 3, 4, 9, 13};
    int element = 118;
    int targetIndex = 3;

    // calculate the array size
    int size = sizeof(arr) / sizeof(int);

    // lets,
    int newArrSize = size + 1;
    int newArr[newArrSize];

    // copy array elements before target index
    int i;
    for (i = 0; i < targetIndex; i++)
    {
        newArr[i] = arr[i];
    }

    // insert element at target index position
    newArr[targetIndex] = element;

    // copy array elements after target index
    for (i = targetIndex; i < size; i++)
    {
        newArr[i + 1] = arr[i];
    }

    printArrElement(newArr, newArrSize);

    return 0;
}