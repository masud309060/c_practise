#include<stdio.h>

// Sort Array: Sort the elements of an array in ascending order. 
int main()
{
    int size, i, j;
    printf("Enter the array size: ");
    scanf("%d", &size);

    int arr[size];
    i = 0;
    while (i < size)
    {
        printf("Enter the value of index %d = ", i);
        scanf("%d", &arr[i]);
        i++;
    }

    printf("\nArray: ");
    for ( i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    int temp;
    for ( i = 0; i < size - 1; i++)
    {
        for(j=i+1 ; j < size; ++j){
            if(arr[i] > arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    
    
    printf("\nSorted Array: ");
    for ( i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    
    return 0;
}