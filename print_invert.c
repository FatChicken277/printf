#include "holberton.h"

/**
 * print_dec - Print string invert
 * @ap: argumnt input
 * Return: return the count of characters
 */
int print_invert(va_list ap)
{

    int len;
	char *str;
	char *ptr;

	str = va_arg(ap, char *);

	if (str == NULL)
	{
    	return (-1);
    }

    ptr = print_rev(str);

    if (ptr == NULL)
    {
    	return (-1);
    }

	for (len = 0; ptr[len] != '\0'; len++)
    {
		print_char(ptr[len]);
    }

    free(ptr);
	return (len);
}

/**
 * print_rev - Print reverse
 * @s: value input
 * Return: void
 */

void *print_rev(char *s)
{

	int i = 0, j;

	while (s[i] != '\0')
	{
		i++;
	}
	i--;
	for (j = i; j != -1; j--)
	{
		print_char(s[j]);
	}
	print_char('\n');
}
