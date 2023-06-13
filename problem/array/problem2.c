// 2. Write a program in C to read n number of values in an array and display them in reverse order.

#include <stdio.h>

int main()
{
    int numbers[3];
    int i;

    printf("Input 3 number of elements in the array : \n");
    for (i = 0; i < 3; i++)
    {
        printf("element %d = ", i);
        scanf("%d", &numbers[i]);
    }

    printf("\nThe values store into the array are : ");
    for (i = 0; i < 3; i++)
    {
        printf("%d ", numbers[i]);
    }

    printf("\nThe values store into the array in reverse are : ");
    for (i = 2; i >= 0; i--)
    {
        printf("%d ", numbers[i]);
    }

    return 0;
}