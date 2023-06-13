// 1. Fibobacci series using recursion
#include <stdio.h>

int fibonacci(int num)
{

    // first base condition check
    if (num == 0)
    {
        return 0;
    }
    // 2nd base condition check
    else if (num == 1)
    {
        return 1;
    }
    else
    {
        // call the fibonacci function recursively till we get to the base condition
        return fibonacci(num - 1) + fibonacci(num - 2);
    }
}

int main()
{
    int i, n;

    printf("Enter the number of element to be in the fibonacci series: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("%d ", fibonacci(i));
    }

    printf("\n");
    return 0;
}
