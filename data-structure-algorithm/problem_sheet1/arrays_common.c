// Find Common Elements: Find common elements between two arrays.

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
    int arr1[] = {3, 8, 9, 3, 4, 6};
    int arr2[] = {4, 8, 9, 2};

    int size1 = sizeof(arr1) / sizeof(int);
    int size2 = sizeof(arr2) / sizeof(int);

    int newArr[size1];
    int k = 0;

    for (int i = 0; i < size1; i++)
    {

        int hasCommon = 0;
        for (int j = 0; j < size2; j++)
        {
            if (arr1[i] == arr2[j])
            {
                hasCommon = 1;
                break;
            }
        }

        if (hasCommon == 1)
        {
            int hasAlreadyInArr = 0;
            for (int x = 0; x < k; x++)
            {
                if (newArr[x] == arr1[i])
                {
                    hasAlreadyInArr = 1;
                    break;
                }
            }

            if(hasAlreadyInArr == 0) {
                newArr[k] = arr1[i];
                k++;
            }
        }
    }


    printArrElement(newArr, k);

    return 0;
}