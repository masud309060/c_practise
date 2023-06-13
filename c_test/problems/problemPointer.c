#include <stdio.h>

int main() {
    int myAge = 23;
    int* ptr = &myAge;
    int numbers[] = {1, 3, 5, 7, 8}, i;


    for(i=0; i< 5; i++) {
        printf("%p \n", &numbers[i]);
        printf("size: %lu \n", sizeof(numbers));
    }

    printf("My Age: %d \n", myAge);
    printf("My Age Pointer: %p \n", &myAge);
    printf("My Age ptr: %p \n", ptr);
    return 0;
}
