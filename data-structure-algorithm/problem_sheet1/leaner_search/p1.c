// Linear Search: Given an array and a target element, implement linear search to find the index of the target element in the array. 

#include<stdio.h>

int main()
{

    int arr[] = {1, 2, 5, 8, 9, 12, 15, 17};
    int targetElement = 9;

    int size = sizeof(arr) / sizeof(int);

    int targetIndex = -1;

    for (int i = 0; i < size; i++)
    {
        // when array i position value equal to target element;
        if(arr[i] == targetElement) {
            targetIndex = i;
            break;
        }
    }

    printf("taget index = %d", targetIndex);
    
    
    return 0;
}