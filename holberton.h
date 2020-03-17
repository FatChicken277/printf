#ifndef HOLBERTON_H
#define HOLBERTON_H
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
#include <limits.h>

/**  Function printf to holberton**/
/**********************/

/**
 * struct op - structure to use in printf
 * @op: ooperator of structure
 * @f: function of work
 */

typedef struct op
{
	char *op;
	int (*f)(va_list);
} op_t;

/* Prototype function to printf */
int _printf(const char *format, ...);
int print_char(char c);
int _print_char(va_list);
int print_string(va_list);
int print_percent(va_list);
int print_integer(va_list ap);
int print_number(int n);

int _parseo(const char *format, op_t ops[], va_list ap);
#endif
