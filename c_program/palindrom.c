#include <stdio.h>
#include <string.h>

int main() {
    char word[10], reverse_word[10];
    int i, j, len;

    printf("Enter a word: ");
    scanf("%s", &word);

    len = strlen(word);

    for(i=0, j = len - 1; i < len; i++, j--) {
        reverse_word[i] = word[j];
    }
    reverse_word[i] = '\0';


    printf("reverse word %s \n", reverse_word);

    if(0 == strcmp(word, reverse_word)) {
        printf("%s word is palindrom", word);
    } else {
        printf("%s word is not palindrom", word);
    }


}
