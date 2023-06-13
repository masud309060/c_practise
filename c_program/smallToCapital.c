#include <stdio.h>

int main() {
    char country[] = {'B', 'a', 'n', 'g', 'l', 'a', 'd', 'e', 's', 'h'};
    int length, i;

    printf("%s \n", country);

    length = 10;

    for(i= 0; i < length; i++) {

        if(country[i] >= 97 && country[i] <= 122) {
            country[i] = 'A' + (country[i] - 'a');
        }
    }

    printf("%s \n", country);

    for(i = 0; i <  length; i++) {
        if(country[i] >= 65 && country[i] <= 90) {
            country[i] = 'a' + (country[i] - 'A');
        }
    }

    printf("%s \n", country);
    return 0;
}
