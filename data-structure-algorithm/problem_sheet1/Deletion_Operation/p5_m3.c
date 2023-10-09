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
    int arr[] = {2, 2, 3, 5, 4, 5, 4};

    // calculate the array size
    int size = sizeof(arr) / sizeof(int);
    int totalElement = 0;

    int newArr[size];
    int count = 0, j;

    if(size == 0) {
        printf("No element found inside array \n");
        return 0;
    };

    for (int i = 0; i < size; i++)
    {
        for (j = 0; j < count; j++)
        {
            if(arr[i] == newArr[j]) {
                break;
            }
        }

        if(j == count) {
            newArr[count] = arr[i];
            count++;
        }        
    }

    printArrElement(newArr, count);

    return 0;
}