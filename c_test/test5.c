#include <stdio.h>

int main() {
    char ch = 'w';

    printf("Enter a character: _ \n");
    scanf("%c", &ch);


    if(ch > 'a' && ch < 'z') {
        printf("The character %c is lowercase. \n", ch);
    } else if(ch > 'A' && ch < 'Z') {
        printf("The character %c is uppercase. \n", ch);
    } else {
        printf("%c is not alphabet character. \n", ch);
    }

    return 0;

}
