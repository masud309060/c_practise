// Average of numbers using loop
#include <stdio.h>

int main()
{
    int i, n;
    float avg = 0, y;

    printf("Enter the total average number: ");
    scanf("%d", &n);

    printf("Enter %d numbers one by one\n\n", n);
    for (i = 0; i < n; i++)
    {
        printf("Enter number %d = ", i + 1);
        scanf("%f", &y);
        avg += y;
    }

    avg /= n;
    printf("\nAverage: %0.2f", avg);

    return 0;
}