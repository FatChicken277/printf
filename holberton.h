#ifndef HOLBERTON_H
#define HOLBERTON_H
#include <stdarg.h>
#include <unistd.h>
/**  printf **/
int _printf(const char *format, ...);
int _putchar(char c);
void print_number(int n);
void unsig(unsigned int n);
void octal(unsigned int n);
#endif