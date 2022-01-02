// Created by ayazn on 12/15/2021.

#include <stdio.h>

void reduce(int numerator, int denominator, int *reduced_numerator, int *reduced_denominator);

int main()
{
    int numerator;
    int denominator;
    int reduced_numerator;
    int reduced_denominator;
    int gcd;

    printf("Enter a fraction (X/Y): ");
    scanf("%d/%d", &numerator, &denominator);

    reduce(numerator, denominator, &reduced_numerator, &reduced_denominator);

    printf("In lowest terms: %d/%d\n", reduced_numerator, reduced_denominator);

}

void reduce(int numerator, int denominator, int *reduced_numerator, int *reduced_denominator)
{
    int gcd;

    if(numerator < denominator)
    {
        gcd = numerator;
    } else
    {
        gcd = denominator;
    }

    if(numerator == 0 || denominator == 0)
    {
        printf("simplified fraction is infinite or undefined");
    }
    while(gcd >1)
    {
        if((numerator % gcd == 0) && (denominator % gcd == 0))
        {
            break;
        }
        gcd--;
    }
    *reduced_numerator = numerator / gcd;
    *reduced_denominator = denominator / gcd;

}
