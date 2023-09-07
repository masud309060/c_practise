#include<stdio.h>
#include <stdbool.h>

int main()
{
    int numbers[] = {2, 4, 8, 3, 4, 2, 1, 6, 7};
    int size = sizeof(numbers) / sizeof(int);

    int element = 7;
    int indexOfElement;
    bool elementHas = false;

    for (int i = 0; i < size; i++)
    {
        if(numbers[i] == element) {
            elementHas = true;
            break;
        }
    }

    if(elementHas) {
        printf("element found \n");
    } else {
        printf("element not found \n");
    }

    return 0;
}