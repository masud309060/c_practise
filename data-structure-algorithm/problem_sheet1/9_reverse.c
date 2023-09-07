#include<stdio.h>

// 9. Reverse an Array: Reverse the elements of an array
int main()
{
    int arr[] = {2, 4, 8, 3, 4, 2, 1, 6, 7};
    int size = sizeof(arr) / sizeof(int);

    int newArr[size];

    for (int i = 0; i < size; i++)
    {
        newArr[size-i-1] = arr[i];
    }

    for (int i = 0; i < size; i++)
    {
        printf("%d ", newArr[i]);
    }

     printf("\n");
    
    
    return 0;
}