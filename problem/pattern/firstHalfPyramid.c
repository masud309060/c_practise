#include <stdio.h>

int main()
{
    int i, j, k;
    int n = 10;

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            if (i + j > n)
                printf("M  ");
            else
                printf("   ");
        }

        for (k = 1; k < i; k++)
        {
            printf("M  ");
        }

        printf("\n");
        printf("\n");

    }

    return 0;
}