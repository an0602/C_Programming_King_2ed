// Created by ayazn on 12/14/2021.

#include <stdio.h>

void pay_amount(int dollars, int *twenties, int *tens, int *fives, int *ones);

int main() {
    int dollars;
    int twenties;
    int tens;
    int fives;
    int ones;

    printf("Enter a dollar amount: ");
    scanf("%d", &dollars);

    pay_amount(dollars, &twenties, &tens, &fives, &ones);

    return 0;
}

/*This function determines the smallest number of $20, $10, $5, and $1 bills
 * necessary to pay the amount represented by the 'dollars' parameter. */
void pay_amount(int dollars, int *twenties, int *tens, int *fives, int *ones)
{
    *twenties = dollars / 20;
    dollars = dollars - (*twenties * 20);
    *tens = dollars / 10;
    dollars = dollars - (*tens * 10);
    *fives = dollars / 5;
    dollars = dollars - (*fives * 5);
    *ones = dollars / 1;

    printf("$20 bills: %d\n", *twenties);
    printf("$10 bills: %d\n", *tens);
    printf(" $5 bills: %d\n", *fives);
    printf(" $1 bills: %d\n", *ones);

}

