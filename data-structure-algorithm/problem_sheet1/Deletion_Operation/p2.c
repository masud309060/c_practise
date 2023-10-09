// Delete from the Beginning: Given an array, delete the first element from the 

#include<stdio.h>

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
    // given array 
    int arr[] = {2, 4, 8, 3, 6};

    // calculate the array size
    int size = sizeof(arr) / sizeof(int);

    // lets, 
    int newArrSize = size - 1;
    int newArr[newArrSize];

    // copy all the array elements except first one
    for (int i = 1; i < size; i++)
    {
        newArr[i - 1] = arr[i];
    }

    printArrElement(newArr, newArrSize);
    
    return 0;
}