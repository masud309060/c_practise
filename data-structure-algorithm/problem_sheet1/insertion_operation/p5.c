// Insert an element after the given index of an array. 


#include<stdio.h>

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
     // given array and element
    int arr[] = {2, 16, 4, 8, 3, 4, 9, 13};
    int element = 118;
    int targetIndex = 3;

    // calculate the array size
    int size = sizeof(arr) / sizeof(int);

    // lets,
    int newArrSize = size + 1;
    int newArr[newArrSize];

    for (int i = 0; i <= targetIndex; i++)
    {
        newArr[i] = arr[i];
    }

    // insert element after target index
    newArr[targetIndex + 1] = element;

    for (int j = targetIndex + 1; j < size; j++)
    {
        newArr[j + 1] = arr[j];
    }
    
    printArrElement(newArr, newArrSize);


    return 0;
}
