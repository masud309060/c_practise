#include <stdio.h>

int main()
{
    char x;

    printf("Enter a letter: ");
    scanf("%c", &x);

    if(x >= 'a' && x <= 'z') {
        printf("This is a small letter");
    } else if(x >= 'A' && x <= 'Z')  {
        printf("This is a capital letter");
    }

}
