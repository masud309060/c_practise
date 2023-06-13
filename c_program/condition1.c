#include <stdio.h>

int main()
{
    int x;

    printf("Please enter a number:_");
    scanf("%d", &x);

    if(x > 0) {
        printf("%d is positive", x);
    } else if(x < 0) {
        printf("%d is Negative", x);
    } else if(x == 0) {
        printf("%d is Zero");
    }


    return 0;
}
