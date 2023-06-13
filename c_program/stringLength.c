#include <stdio.h>


int getLength(char str[]) {
    int i = 0, length = 0;

    while(str[i] != '\0') {
        length++;
        i++;
    }

    return length;

}

int main() {
    char country[100];
    int length;

    printf("What is your country? ans: ");
    // scanf("%s", &country);
    scanf("%s", country);

    length = getLength(country);

    printf("Country length is %d", length);



    return 0;
}
