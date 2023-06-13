// 3. Write a program in C to find the sum of all elements of the array.

#include <stdio.h>

int main()
{
    int numbers[3];
    int i;
    int sum = 0;

    printf("Input 3 number of elements in the array : \n");
    for (i = 0; i < 3; i++)
    {
        printf("element %d = ", i);
        scanf("%d", &numbers[i]);
    }

    printf("\nSum of all elements stored in the array is: ");
    for (i = 0; i < 3; i++)
    {
        sum += numbers[i];
    }
    printf("%d \n", sum);

    return 0;
}