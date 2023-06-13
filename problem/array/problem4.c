
#include <stdio.h>

int main() {
    int array[5] = {1, 3, 4, 5, 6};
    int copiedArray[5];
    int i;

    for ( i = 0; i < 5; i++)
    {
        copiedArray[i] = array[i];
    }

    printf("The copied array elements are: ");
    for (i = 0; i < 5; i++)
    {
       printf("% 5d ", copiedArray[i]);
    }
    
    printf("\n");
    return 0;
}