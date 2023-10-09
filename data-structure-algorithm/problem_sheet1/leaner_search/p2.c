// Find Maximum Element: Given an array, find the index of the maximum element in the array.

#include<stdio.h>

int main()
{
    int arr[] = {1, 2, 5, 8, 23, 9, 12, 15, 17};
    
    int size = sizeof(arr) / sizeof(int);
    int max = 0;

    for (int i = 0; i < size; i++)
    {
        if(arr[i] > max) {
            max = arr[i];
        }
    }


    printf("Max number: %d \n", max);

    return 0;
}