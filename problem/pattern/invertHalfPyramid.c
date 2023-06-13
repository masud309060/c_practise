#include <stdio.h>

int main() {
    int i, j;
    int n = 5;

    for ( i = n; i > 0; i--)
    {
        for ( j = 0; j < i; j++)
        {
            printf("%d ", i);
        }
        

        printf("\n");
    }
    

    return 0;
}