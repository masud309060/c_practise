#include <stdio.h>

int main() {
    char name[30];

    printf("What is your name? ");
    fgets(name, sizeof(name), stdin);

    // scanf("%s", name);

    printf("Hello, %s", name);
    printf("%p", &name); // memory address value

    return 0;
}
