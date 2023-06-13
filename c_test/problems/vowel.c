#include <stdio.h>

int main() {
    char c;
    int lowerCaseVowel, upperCaseVowel;

    printf("Enter a alphabet: ");
    scanf("%c", &c);

    lowerCaseVowel = (c == 'a' || c == 'e' ||c == 'i' ||c == 'o' ||c == 'u');
    upperCaseVowel = (c == 'A' || c == 'E' ||c == 'I' ||c == 'O' ||c == 'U');

    if(lowerCaseVowel || upperCaseVowel) {
        printf("%c is vowel", c);
    }

    else {
        printf("%c is consonant", c);
    }

    return 0;
}
