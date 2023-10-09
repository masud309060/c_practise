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

// 1. Update Element: Given an array, an index, and a new value, update the element at the specified index with the new value. 
void updateArrElement(int arr[], int size, int targetIndex, int newValue) {

    for (int i = 0; i < size; i++)
    {
        if(i == targetIndex) {
            arr[i] = newValue;
        }
    }
    
}

// 2. Increment All Elements: Given an array and an integer value, increment all elements in the array by the given value. 
void incrementArrElement(int arr[], int size, int increment) {

    for (int i = 0; i < size; i++)
    {
        arr[i] += increment;
    }
    
}


// 3. Replace Even Elements: Given an array, replace all even elements with a specific value. 
void updateArrEvenElement(int arr[], int size, int newValue) {

    for (int i = 0; i < size; i++)
    {
        if(arr[i] % 2 == 0) {
            arr[i] = newValue;
        }
    }
    
}


// 4. Update Range: Given an array, a start index, an end index, and a new value, update all elements within the specified range with the new value. 
void updateArrRangeElement(int arr[], int size, int startIndex, int endIndex, int newValue) {

    for (int i = 0; i < size; i++)
    {
        if(i >= startIndex && i <= endIndex) {
            arr[i] = newValue;
        }
    }
    
}

// 5. Negate Odd Elements: Given an array, negate the values of all odd elements (multiply by -1).
void negateArrOddElement(int arr[], int size) {

    for (int i = 0; i < size; i++)
    {
        if(arr[i] % 2 == 1) {
            arr[i] *= -1;
        }
    }
    
}

int main()
{
    int arr[] = {4, 5, 7, 3, 2, 5, 8};
    int targetIndex = 3;
    int newValue = 101;

    int size = sizeof(arr) / sizeof(int);

    // updateArrElement(arr, size, targetIndex, newValue);

    // incrementArrElement(arr, size, 100);

    // updateArrEvenElement(arr, size, 500);

    // updateArrRangeElement(arr, size, 1, 5, 20);

    negateArrOddElement(arr, size);

    printArrElement(arr, size);

    return 0;
}