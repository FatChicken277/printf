#include "holberton.h"
#include <stdio.h>

int _printf(const char *format, ...)
{
    int i = 0, j = 0, a = 0, k = 0;
    int p;
    char *s;
    unsigned int u;
    va_list list;
    va_list list2;
    va_list list3;

    va_start(list, format);
    va_start(list2, format);
    va_start(list3, format);

        while (format[i] != '\0')
        {
            if (format[i] == '%' && format[i+1] == '%')
                a--;
            i++;
        }
        a += i;

        p = va_arg(list, int);
        s = va_arg(list2, char *);
        u = va_arg(list3, unsigned int);
        for (j = 0; j < i; j++)
        {
            if ((format[j] == '%') && (format[j+1] == 'd' || format[j+1] == 'i'))
            {
                print_number(p);
                j++;
            }
            else if (format[j] == '%' && format[j+1] == '%')
                ;
            else if (format[j] == '%' && format[j+1] == 'c')
            {
                _putchar(p);
                j++;
            }
            else if (format[j] == '%' && format[j+1] == 's')
            {
                for (k = 0; s[k] != '\0'; k++)
                {
                    _putchar(s[k]);
                }
                j++;
            }
            else if (format[j] == '%' && format[j+1] == 'u')
            {
                unsig(u);
                j++;
            }
            else if (format[j] == '%' && format[j+1] == 'o')
            {
                octal(p);
                j++;
            }
            else
                _putchar(format[j]);
        }

    va_end(list);
    va_end(list2);
    va_end(list3);
    return (a);
}
