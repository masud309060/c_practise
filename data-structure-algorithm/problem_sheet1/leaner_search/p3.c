// Count Occurrences: Given an array and a target element, count the number of occurrences of the target element in the array.

#include <stdio.h>

int main()
{
    int arr[] = {1, 2, 5, 8, 23, 2, 9, 12, 2, 2, 15, 17};
    int target = 2;

    int count = 0;
    int size = sizeof(arr) / sizeof(int);

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == target)
        {
            count++;
        }
    }

    printf("Total number of occurences of the target element %d is %d time \n", target, count);

    return 0;
}