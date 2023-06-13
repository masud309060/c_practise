#include <stdio.h>

int main()
{
    char ch;
    // ch = 'M'; direct assign with single inverted comma;

    printf("Enter the first character of your name: __");

    // scanf("%c", &ch); or
    ch = getchar();

    printf("First letter of your name is %c", ch);

    return 0;
}
