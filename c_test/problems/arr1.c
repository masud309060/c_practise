#include <stdio.h>

int main() {
    double total_marks;
    double ft_marks = 80;
    double st_marks = 74;
    double final_marks = 97;

    total_marks = ft_marks / 4 + st_marks / 4 + final_marks / 2;


    printf("Total Marks %0.02lf", total_marks);


    return 0;
}
