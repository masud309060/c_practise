#include <stdio.h>


int main() {
    // there is 4 way to declare a string;

    char country1[11] = {'B', 'a', 'n', 'g', 'l', 'a', 'd', 'e', 's', 'h', '\0'};
    printf("country 1 = %s \t", country1);

    char country2[] = {'B', 'a', 'n', 'g', 'l', 'a', 'd', 'e', 's', 'h', '\0'};
    printf("country 2 = %s \t", country2);

    char country3[] = "Bangladesh";
    printf("country 3 = %s \t", country3);

    char *country4 = "Bangladesh"; // * it's called pointers
    printf("country 4 = %s", country4);

    return 0;

}
