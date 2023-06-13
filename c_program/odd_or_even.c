#include <stdio.h>

int main()
{
    int a;
    printf("Enter a number to know Odd or Even: ");
    scanf("%d", &a);

    if(a % 2 == 0) {
        printf("The number is Even");
    } else {
        printf("The number is Odd");
    }

    return 0;
}
