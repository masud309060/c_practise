//  Delete from the End: Given an array, delete the last element from the array. 

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

    // copy all the array elements except last index
    for (int i = 0; i < size - 1; i++)
    {
        newArr[i] = arr[i];
    }


    printArrElement(newArr, newArrSize);

    return 0;
}