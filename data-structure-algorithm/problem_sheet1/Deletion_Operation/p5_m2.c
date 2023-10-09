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
    int arr[] = {2, 4, 8, 3, 4, 4, 8, 9, 2, 4, 8, 3, 4, 4, 8, 9};

    // calculate the array size
    int size = sizeof(arr) / sizeof(int);

    if(size < 1) return 0;

    for (int i = 0; i < size; i++)
    {
        // use nested loop to find the duplicate
        for (int j = i + 1; j < size; j++)
        {
            
            if(arr[i] == arr[j]) {
                // after find the duplicate delete the element by replace next position element;
                for (int k = j; k < size - 1; k++)
                {
                    arr[k] = arr[k + 1];
                }

                size--;   
                // since 1 duplicate is deleted by replace next position element so j is not increase;
                j--;             
            }
        }
                
    }


    int newArr[size];

    for (int i = 0; i < size; i++)
    {
        newArr[i] = arr[i];
    }
    
    printArrElement(newArr, size);

    return 0;
}