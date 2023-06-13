#include <stdio.h>

int main() {

    double load_amount, interest_rate, number_of_year, total_amount, monthly_amount;

    printf("Load amount = ");
    scanf("%lf", &load_amount);

    printf("Interest rate = ");
    scanf("%lf", &interest_rate);

    printf("Number of year = ");
    scanf("%lf", &number_of_year);

    total_amount = load_amount + load_amount * number_of_year * interest_rate / 100;
    monthly_amount = total_amount / (number_of_year * 12);

    printf("Total amount with interest = %0.1lf \n", total_amount);
    printf("Monthy amount with interest = %0.1lf ", monthly_amount);

    return 0;


}
