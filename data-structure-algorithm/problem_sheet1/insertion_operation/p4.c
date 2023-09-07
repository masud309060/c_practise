// Append Array: Given two arrays, append the elements of the second array to the end of the first array.

#include <stdio.h>

void printArrElement(int arr[], int size)
{

    printf("\n------------------------------\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\nSize: %d", size);
    printf("\n------------------------------\n");
}

int main()
{

    // given 2 array and element
    int arr1[] = {2, 16, 4, 13, 32};
    int arr2[] = {16, 4, 8, 44};


    // calculate the 2 array's size
    int size1 = sizeof(arr1) / sizeof(int);
    int size2 = sizeof(arr2) / sizeof(int);

    // lets,
    int newArrSize = size1 + size2;
    int newArr[newArrSize];

    int i, j;
    for (i = 0; i < size1; i++) {
        newArr[i] = arr1[i];
    }

    for (j = 0; j < size2; j++) {
        newArr[j + size1] = arr2[j];
    }

    printArrElement(newArr, newArrSize);

    return 0;
}