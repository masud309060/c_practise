//  Array Compressing: Given an array containing repeated elements, compress the array by removing duplicates and filling the empty spaces with a special value.

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
    int arr[] = {2, 4, 8, 3, 4, 4, 8, 9};

    // calculate the array size
    int size = sizeof(arr) / sizeof(int);
    int totalElement = 0;

    int newArr[size];
    int k = 0;

    if(size < 1) return 0;

    newArr[0] = arr[0];
    k++;

    for (int i = 1; i < size; i++)
    {

        int has = 0;
        for (int j = 0; j < i; j++)
        {
            if(arr[i] == arr[j]) {
                has = 1;
                break;
            }
        }

        if(has == 0) {
            newArr[k] = arr[i];
            k++;
        }
        
    }

    printArrElement(newArr, k);

    return 0;
}