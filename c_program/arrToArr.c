#include <stdio.h>

/*
int main() {
    int arr1[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int arr2[10];
    int i, j;

    for(i = 0, j = 9; i < 10; i++, j--) {
        arr2[j] = arr1[i];
    }

    for(i = 0; i < 10; i++) {
        arr1[i] = arr2[i];
    }

    for(i = 0; i < 10; i++) {
        printf("%d nth element is: %d \n", i+1, arr1[i]);
    }


    return 0;
}

*/

int main() {
    int ara[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int i, j, temp;

    for(i = 0, j = 9; i < 10; i++, j--) {

         if(i <= j) {
            temp = ara[j];
            ara[j] = ara[i];
            ara[i] = temp;

        } else {
            break;
        }
    }


    for(i = 0; i < 10; i++) {
        printf("%d\n", ara[i]);
    }

    return 0;
}
