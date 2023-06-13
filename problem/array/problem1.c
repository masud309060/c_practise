// 1. Write a program in C to store elements in an array and print them.

#include <stdio.h>

int main() {

    int numbers[10];
    int i;

    printf("Insert 10 number \n");

    for (i = 0; i < 10; i++)
    {
        printf("number index %d = ", i);
        scanf("%d", &numbers[i]);
    }

    printf("numbers are: ");
    for ( i = 0; i < 10; i++)
    {
         printf("%d ", numbers[i]);
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
    }
    
    
    return 0;
}