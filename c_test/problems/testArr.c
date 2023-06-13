#include <stdio.h>

int main()
{
    int matrix[3][4] = { {2, 3, 4, 5}, {3, 4, 5, 6}, {33, 44, 55, 66} }, i, j;

    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 4; j++)
        {
            printf("[%d][%d] = %d \n", i, j, matrix[i][j]);
        }
    }

    return 0;
}
