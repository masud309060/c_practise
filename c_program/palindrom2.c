#include <stdio.h>


int main() {
    char word[20];
    int i, j, len, result;

    printf("Enter a word to know is the word palindrom? ___ ");
    scanf("%s", &word);

    len = strlen(word);

    for(i = 0, j = len - 1; i < len; i++, j--) {
        if(word[i] == word[j]) {
            result = 1;
        } else {
            result = 0;
            break;
        }
    }

    if(result == 1) {
        printf("%s word is panildrom", word);
    } else {
        printf("%s word is not panildrom", word);
    }


    return 0;
}
