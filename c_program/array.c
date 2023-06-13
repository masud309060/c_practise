#include <stdio.h>

/*
int main() {
    int ft_marks, st_marks, final_marks;
    double total_marks;

    ft_marks = 80;
    st_marks = 74;
    final_marks = 97;

    total_marks = ft_marks / 4.0 + st_marks / 4.0 + final_marks / 2.0;

    printf("Total Marks is %0.2lf", total_marks);

    return 0;
}

*/
/*
int main() {
    int ara[5] = {10, 20, 25, 35, 50};

    printf("First element: %d\n", ara[0]);
    printf("Third element %d \n", ara[3]);

    return 0;
}
*/

/*
int main() {
    int ara[5] = {6, 7, 4, 6, 9};

    printf("%d\n", ara[­-1]);
    printf("%d\n", ara[5]);
    printf("%d\n", ara[100]);

    return 0;
}
*/

int main() {
    int i, ara[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};

    for(i = 0; i < 10; i++) {
        printf("%d th element is: %d \n", i+1, ara[i]);
    }

    return 0;
}
