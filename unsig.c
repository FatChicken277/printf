#include "holberton.h"
void unsig(unsigned int n)
{
unsigned int value = n;
if (value / 10)
{
unsig(value / 10);
}
_putchar((value % 10) + 48);
}