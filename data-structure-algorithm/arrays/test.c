#include <stdio.h>

int main()
{
// insert at the end;
    int arr[10] = {2, 5, 3, 4, 8, 9, 10, 23, 32, 13};
    int size = sizeof(arr) / sizeof(arr[0]);
    int insertElement = 100;

    printf("old array: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");


    int newSize = size + 1;
    int newArr[newSize];
    
    for (int i = 0; i < size; i++)
    {
        newArr[i] = arr[i];
    }
    newArr[newSize - 1] = insertElement;
    




    

    return 0;
}