#ifndef MAIN_H
#define MAIN_H
#include <limits.h>
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>


/**
 * struct format - converter for printf
 * @c: type char pointer of the specifier
 * @f: function for the conversion specifier
 *
 */
typedef struct format
{
	char *c;
	int (*f)();
} operation;

int _printf(const char *format, ...);
int _putchar(char c);
int print_37(void);
int print_char(va_list);
int print_string(va_list);

#endif
