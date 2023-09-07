#include <stdio.h>

int main() {
    int i, n;
    float avg = 0, y;

    printf("Enter the total average number: ");
    scanf("%d", &n);

    printf("Enter the numbers one by one \n");

    for ( i = 0; i < n; i++)
    {
        printf("Enter number %d = ", i);
        scanf("%f", &y);
        avg += y;
    }

    avg = avg / n;

    printf("Average = %0.2f", avg);

    return 0;
}