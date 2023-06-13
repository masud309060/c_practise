#include <stdio.h>

int main()
{
    int ft_marks, st_marks, final_marks;
    double total_marks;

    printf("Enter first term marks = ");
    scanf("%d", &ft_marks);

    printf("Enter second term marks = ");
    scanf("%d", &st_marks);

    printf("Enter final term marks = ");
    scanf("%d", &final_marks);

    total_marks = ft_marks / 4.0 + st_marks / 4.0 + final_marks / 2.0;

    printf("Total marks = %.2lf Percentage", total_marks);

    return 0;
}