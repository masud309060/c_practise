#include <stdio.h>

 // Check Palindrome: Check if an array is a palindrome (reads the same forwards and backward). 
int main() {
    // Write C code here
    int size, i, j;

    printf("Enter Size of Array: ");
    scanf("%d", &size);
    
    int arr[size];
    for(i = 0; i < size; i++) {
        printf("Enter the value of index %d = ", i);
        scanf("%d", &arr[i]);
    }
    
    
    int isPalindrom = 1;
    for(i = 0, j = size - 1; i < size/2; i++, j--) {
        if(arr[i] != arr[j]) {
            isPalindrom = 0;
            break;
        }
    }

    printf("\n");
    for ( i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
        
    if(isPalindrom == 1) {
        printf(" The array number is Panindrom \n");
    } else {
         printf(" The array number is not Panindrom \n");
    }
    
    printf("\n");
    return isPalindrom;
}