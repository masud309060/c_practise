// Find Union of Arrays: Find the union of elements from two arrays. 

#include<stdio.h>


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
    int arr1[] = {3, 2, 4, 4, 5, 8, 1,2, 2, 4, 1,2, 2, 4, 7};
    int arr2[] = {1,2, 2, 4, 1,2, 2, 4, 7, 1,2, 2, 4, 1,2, 2, 4, 7, 0};

    int size1 = sizeof(arr1) / sizeof(int);
    int size2 = sizeof(arr2) / sizeof(int);

    int newArr[size1 + size2];
    int k = 0;

    
    for (int i = 0; i < size1; i++)
    {
        int alreadyInArr = 0;
        for (int x = 0; x < k; x++)
        {
            if(newArr[x] == arr1[i]) {
                alreadyInArr = 1;
                break;
            }
        }

        if(alreadyInArr == 0) {
            newArr[k] = arr1[i];
            k++;
        }
    }

    for (int i = 0; i < size2; i++)
    {
        int alreadyInArr = 0;
        for (int x = 0; x < k; x++)
        {
            if(newArr[x] == arr2[i]) {
                alreadyInArr = 1;
                break;
            }
        }

        if(alreadyInArr == 0) {
            newArr[k] = arr2[i];
            k++;
        }
    }
    

    printArrElement(newArr, k);

    return 0;
}