#include <stdio.h>

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    int temp, i, j;

    for (i = 0, j = 0; i < 5; i++, j--)
    {
        temp = arr[j];

        arr[j] = arr[i];
        arr[i] = temp;
    }

    for (i = 0; i < 5; i++)
    {
        printf("%d\n", arr[i]);
    }

    return 0;
}