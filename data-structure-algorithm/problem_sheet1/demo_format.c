#include <stdio.h>

int main()
{

    int numbers[] = {2, 4, 8, 3, 4, 2, 1, 6, 7};
    int size = sizeof(numbers) / sizeof(int);

    int targetIndex = 4;
    int targetIndexValue = 30;

    int newSize = size + 1;
    int newArray[newSize];


    for (int i = 0; i < newSize; i++)
    {
        if(i < targetIndex) {
            newArray[i] = numbers[i];
        } 
        else if(i > targetIndex) {
            newArray[i] = numbers[i-1];
        } 
        else if(i == targetIndex) {
             newArray[i] = targetIndexValue;
        }
    }


    for (int i = 0; i < newSize; i++) {
        printf("%d \n", newArray[i]);
    }

    return 0;
}