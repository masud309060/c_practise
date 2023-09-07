#include <stdio.h>

int main()
{
    int numbers[] = {3, 3, 3, 6, 7, 5, 5};
    int size = sizeof(numbers) / sizeof(int);
    
    int i, total_even = 0;

    for (i = 0; i < size; i++)
    {
        if(numbers[i] % 2 == 1) {
            total_even += 1;
        }
    }


    printf("Total Event Number: %d", total_even);
    

    return 0;
}