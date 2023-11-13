#include "main.h"

/**
 *  _printf - is a function that selects the correct function to print.
 * @format: identifier to look for.
 * Return: the length of the string.
 */

int _printf(const char *format, ...)
{
operation ops[] = {
{"%c", print_char},
{"%s", print_string},
{"%%", print_37},
};
va_list args;
int i, j;
int length = 0;
i = 0;
va_start(args, format);

if (format == NULL || (format[0] == '%' && format[1] == '\0'))
return (-1);
again:
while (format[i] != '\0')
{
j = 2;
while (j >= 0)
{
if (ops[j].c[0] == format[i] && ops[j].c[1] == format[i + 1])
{
length += ops[j].f(args);
i = i + 2;
goto again;
}
j--;
}
_putchar(format[i]);
length++;
i++;
}
va_end(args);
return (length);
}
