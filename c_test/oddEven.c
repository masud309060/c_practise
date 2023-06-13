#include <stdio.h>

int main() {
    int n = 0, reminder;

    printf("Enter a number: __ \n");
    scanf("%d", &n);

    // reminder = n % 2;
    reminder = n - n/2*2;

    printf("Reminder = %d \n", reminder);

    if(reminder == 0) {
        printf("The given number %d is even", n);
    } else {
        printf("The given number %d is odd", n);
    }

    return 0;
}
