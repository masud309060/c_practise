// Rotate Array: Rotate the elements of an array by a given number of positions.

#include <stdio.h>

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int d = 2;

    int size = sizeof(arr) / sizeof(int);
    int newArr[size];

    int i, j;

    i = d;
    j = 0;
    while(i < size) {
        newArr[j] = arr[i];
        i++, j++;
    }

    i = 0;
    while (i < d)
    {
        newArr[i] = arr[j];
        i++, j++;
    }
    

    return 0;
}