// Insert at the Beginning: Given an array and an element, insert the element at the beginning of the array, shifting other elements to the right. 

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
     // given array and element
    int arr[] = {2, 4, 8, 3, 4};
    int element = 118;

    // calculate the array size
    int size = sizeof(arr) / sizeof(int);

    // lets, 
    int newArrSize = size + 1;
    int newArr[newArrSize];

    // insert the element in first position
    newArr[0] = element;

    // copy all array element into the new array, 1 index after
    for (int i = 0; i < size; i++)
    {
        newArr[i + 1] = arr[i];
    }
    

    printArrElement(newArr, newArrSize);

    return 0;
}