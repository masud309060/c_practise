#include <stdio.h>

int main()
{

    int arr[5] = {1, 2, 3, 4, 5};
    int arr2[5];
    int i, j;

    // reverse and store into arr2;
    for (i = 0, j = 4; i < 5; i++, j--)
    {
        arr2[i] = arr[j];
    }

    // restore arr2 value into arr;
    for (i = 0; i < 5; i++)
    {
        arr[i] = arr2[i];
    }

    for (i = 0; i < 5; i++)
    {
        printf("%d \n", arr[i]);
    }

    return 0;
}