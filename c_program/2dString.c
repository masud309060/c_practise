#include <stdio.h>
#include <string.h>

int main() {
    char countries[7][100] = {
        "Bangladesh", "India", "Sri lanka", "Pakistan", "Vatan", "Malbives", "Nepal"
    };

    int i;
    int j;
    int name_length;

    for(i = 0; i < 7; i++) {
        printf("Country %d = %s \n", i + 1, countries[i]);

        name_length = strlen(countries[i]);

        for(j = 0; j < name_length; j++) {
            printf("%c, ", countries[i][j]);
        }

        printf("\n");
    }

    return 0;
}
