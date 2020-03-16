#include "holberton.h"
#include <stdio.h>
 
/**
 * _print_char - Print string
 * @ap: arguments
 * Return: return the amount of characters
 */
 
int _print_char(va_list ap)
{
    print_char(va_arg(ap, int));
    return (1);
}
 
/**
 * print_string - Print string
 * @ap: arguments
 * Return: return the amount of characters
 */
 
int print_string(va_list ap)
{
    int x;
    char *str;
 
    str = va_arg(ap, char *);
    if (str == NULL)
    {
        str = "(null)";
    }
    for (x = 0; str[x] != '\0'; x++)
    {
        print_char(str[x]);
    }
    return (x);
}
 
/**
 * print_percent - Print percent symbol
 * @ap: argumnt
 * Return: return the amount of characters
 */
 
int print_percent(__attribute__((unused))va_list ap)
{
    print_char('%');
    return (1);
}
 
 
/**
 * print_integer - Print integer
 * @ap: argumnt
 * Return: return the amount of characters
 */
int print_integer(va_list ap)
{
    int p, contador = 1;
 
    p = va_arg(ap, int);
 
    print_number(p);
    if (p < 10)
        return (contador);
    else
    {
        while(p/10>0)
        {
            p=p/10;
            contador++;
        }
    }
    return (contador);
}
 
/**
 * print_number - Print number
 * @ap: argumnt
 * Return: void
 */
void print_number(int n)
{
 
    unsigned int value = n;
 
    if (n < 0)
    {
        print_char(45);
        value = value * (-1);
    }
 
    if (value / 10)
    {
        print_number(value / 10);
    }
    print_char((value % 10) + 48);
}
