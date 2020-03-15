#include "holberton.h"
void octal(unsigned int n)
{
    int octalNumber[100], i = 1, j;
    long quotient;

    quotient = n;
    while (quotient != 0)
    {
        octalNumber[i++] = quotient % 8;
        quotient = quotient / 8;
    }
    for (j = i - 1; j > 0; j--)
        print_number(octalNumber[j]);
}