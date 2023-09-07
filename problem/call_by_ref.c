#include <stdio.h>

void swap(int *var1, int *var2)
{
    int temp = *var1;
    *var1 = *var2;
    *var2 = temp;
}

int main() {
    int var1=2, var2=3;

    printf("Before swap value of var1 and var2 is: %d %d \n", var1, var2);
    swap(&var1, &var2);
    printf("After swap value of var1 and var2 is: %d %d", var1, var2);


    return 0;
}
