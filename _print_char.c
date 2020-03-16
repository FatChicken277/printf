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
	{
		return (contador);
	}
	else
	{
		while (p / 10 > 0)
		{
			p = p / 10;
			contador++;
		}
	}
	return (contador);
}

/**
 * print_number - Print number
 * @n: argumnt
 * Return: void
 */
void print_number(int n)
{
	long int resp, potencia, aux, acumula = 0;
	long int pa, ca = 0, ra = 0, ra1 = 0, im;

	if (n < 0)
	{
		print_char(45);
		n = n * (-1);
	}
	resp = n;
	aux = resp;

	while (resp % 10 != 0)
	{
		ca++;
		resp = resp / 10;
	}

	potencia = 1;
	for (pa = 1; pa <= ca - 1; pa++)
	{
		potencia = potencia * 10;
	}
	while (aux / 10 != 0)
	{
		acumula = acumula + ((aux % 10) * potencia);
		aux = aux / 10;
		potencia = potencia / 10;
	}
	acumula = acumula + aux;
	ra1 = acumula;
	for (im = 0; im < ca; im++)
	{
		ra = ra1 % 10;
		print_char(ra + '0');
		ra1 = ra1 / 10;
	}
}
