// Write a C Program to Find ASCII Value of a Character
#include <stdio.h>

int main() {
    char c;

    printf("Enter a character: ");
    scanf("%c", &c);


    // %c display the character c;
    // %d display the value of ther character c
    printf("ASCII Value of a Character %c = %d", c, c);

    return 0;
}
