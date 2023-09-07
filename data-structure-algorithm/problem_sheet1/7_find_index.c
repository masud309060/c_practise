#include<stdio.h>

// 7. Find Index of Element: Given an element, find its index in the array
int main()
{
    int numbers[] = {2, 4, 8, 3, 4, 2, 1, 6, 7};
    int size = sizeof(numbers) / sizeof(int);

    int element = 4;
    int indexOfElement;

    for (int i = 0; i < size; i++)
    {
        if(numbers[i] == element) {
            indexOfElement = i;
            break;
        }
    }

    printf("Index of %d is %d \n", element, indexOfElement);
    

    return 0;
}