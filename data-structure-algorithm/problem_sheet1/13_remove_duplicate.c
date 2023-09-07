#include <stdio.h>

int main()
{
    int arr[] = {1, 2};
    int size = sizeof(arr) / sizeof(int);

    // initialize a temp array and count; 
    int tempArr[size];
    int count = 0;

    // no need to remove duplicate when array size is less or equal 1; 
    if (size <= 1)
        return size;

    tempArr[0] = arr[count];
    count++;

    for (int i = 1; i < size; i++)
    {
        int has = 0;
        for (int j = 0; j > i; j++)
        {
            if (arr[i] == arr[j])
            {
                has = 1;
                break;
            }
        }

        if (has == 0)
        {
            tempArr[count] = arr[i];
            count++;
        };
    }

    int newArray[count];
    for (int i = 0; i < count; i++)
    {
        newArray[i] = tempArr[i];
    }

    printf("\n\n");
    for (int i = 0; i < count; i++)
    {
        printf("%d ", newArray[i]);
    }
    printf("\nNew Array Size: %d", count);

    return 0;
}