#include<stdio.h>

// Find the Sum of Even and Odd: Calculate the sum of even and odd elements separately. 
int main()
{
    int size;
    printf("Enter the array size: ");
    scanf("%d", &size);

    int arr[size];
    int i = 0;
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

    int sumEven = 0;
    int sumOdd = 0;
    
    for ( i = 0; i < size; i++)
    {
        if(arr[i] % 2 == 0) {
            sumEven += arr[i];
        } else {
            sumOdd += arr[i];
        }
    }
    printf("\nSum of event nubmers: %d", sumEven);
    printf("\nSum of odd nubmers: %d", sumOdd);
    
    return 0;
}