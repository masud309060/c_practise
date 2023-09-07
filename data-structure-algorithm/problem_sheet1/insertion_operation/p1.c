//  Insert at the End: Given an array and an element, insert the element at the end of the array.

#include <stdio.h>

void printArrElement(int arr[], int size) {


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
    int arr[] = {2, 4, 8, 3, 4, 2, 1, 6, 7};
    int element = 118;

    // calculate the array size
    int size = sizeof(arr) / sizeof(int);

    // lets, 
    int newArrSize = size + 1;
    int newArr[newArrSize];

    // copy all the element from old array; 
    for (int i = 0; i < size; i++)
    {
        newArr[i] = arr[i];
    }

    // insert element into the last index of new array
    newArr[newArrSize - 1] = element;

    printArrElement(newArr, size + 1);
    
    return 0;
}