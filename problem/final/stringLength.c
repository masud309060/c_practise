// String length determination

#include <stdio.h>

int strLength(char str[])
{
    int count = 0;

    for (count = 0; str[count] != '\0'; count++)
        ;

    return count;
}

int main()
{
    char c[100];
    int l;

    printf("Enter the string: ");
    scanf("%s", c);

    l = strLength(c);

    printf("String Length: %d", l);

    return 0;
}
