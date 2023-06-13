// 3. Factorial using loop and recursion
#include <stdio.h>

int main()
{
    int i, n, fact = 1;
    printf("Enter the number: ");
    scanf("%d", &n);

    i = 1;
    while (i <= n)          
    {
        fact = fact * i;
        i++;
    }
    

    printf("factoral value of %d = %d ", n, fact);

    return 0;
}