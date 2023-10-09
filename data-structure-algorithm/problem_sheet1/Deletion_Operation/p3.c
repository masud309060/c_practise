// Delete from a Specific Position: Given an array and an index, delete the element at the specified index, shifting other elements to the left if necessary.


#include<stdio.h>

Find the Maximum Element: Given an array, find the maximum element in it. 

Find the Minimum Element: Find the minimum element in an array. 

Calculate the Sum: Calculate the sum of all elements in an array. 

Calculate the Average: Calculate the average of all elements in an array. 

Count Even Numbers: Count the number of even elements in an array. 

Count Odd Numbers: Count the number of odd elements in an array. 

Find Index of Element: Given an element, find its index in the array. 

Find a Specific Element: Check if a specific element exists in an array. 

Reverse an Array: Reverse the elements of an array. 

Copy an Array: Create a copy of an array. 

Merge Arrays: Merge two arrays into one. 

Find Frequency: Count the frequency of a specific element in an array. 

Remove Duplicates: Remove duplicate elements from an array. 

Find the Second Largest: Find the second largest element in an array. 

Find Second Smallest: Find the second smallest element in an array. 

Find Range: Find the range (difference between the maximum and minimum) of an array. 

Rotate Array: Rotate the elements of an array by a given number of positions. 

Check Palindrome: Check if an array is a palindrome (reads the same forwards and backward). 

Missing 

Sort Array: Sort the elements of an array in ascending order. 

Find the Sum of Even and Odd: Calculate the sum of even and odd elements separately. 

Find Common Elements: Find common elements between two arrays. 

Find Union of Arrays: Find the union of elements from two arrays. 

Find Intersection of Arrays: Find the intersection of elements between two arrays. 

Missing 

Find Kth Largest Element: Find the Kth largest element in an array. 

Find Kth Smallest Element: Find the Kth smallest element in an array. 

Remove Element: Remove a specific element from an array. 

Replace Element: Replace a specific element with another element in an array. 

Split Array: Split an array into two parts from a given index.

int main()
{

     // given array 
    int arr[] = {2, 4, 8, 3, 6};
    int targetIndex = 1;

    // calculate the array size
    int size = sizeof(arr) / sizeof(int);

    // lets, 
    int newArrSize = size - 1;
    int newArr[newArrSize];

    // copy all the array element before target index 
    for (int i = 0; i < targetIndex; i++)
    {
        newArr[i] = arr[i];
    }

    // copy all the array element after target index 
    for (int j = targetIndex + 1; j < size; j++)
    {
        newArr[j - 1] = arr[j];
    }

    printArrElement(newArr, newArrSize);
    
    
    
    return 0;
}