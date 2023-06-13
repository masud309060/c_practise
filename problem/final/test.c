#include <stdio.h>

int main()
{
    int matrix[2][3][2];
    int i, j, k;

    printf("Enter 12 values \n");

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 2; k++)
            {
                scanf("%d", &matrix[i][j][k]);
            }
        }
    }

    // display the values
    printf("\n ------------------- \n\n");

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 2; k++)
            {
                printf("Matrix[%d][%d][%d] = %d \n", i, j, k, matrix[i][j][k]);
            }
        }
    }

    return 0;
}