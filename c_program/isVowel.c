#include <stdio.h>

int main()
{
    char ch;

    printf("Enter a letter: ");
    scanf("%c", &ch);

    if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
        printf("the letter is vowel ");
    } else {
        printf("the letter is COSONANT ");
    }
}
