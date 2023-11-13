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
{"%%", print_37}, {"%b", print_binary},
};
va_list args;
int i, j;
int length = 0;
int found;

va_start(args, format);

if (format == NULL || (format[0] == '%' && format[1] == '\0'))
	return (-1);

for (i = 0; format[i] != '\0'; i++)
{
	found = 0;
for (j = 0; j < 4; j++)
{
	if (ops[j].c[0] == format[i] && ops[j].c[1] == format[i + 1])
	{
		length += ops[j].f(args);
		i++;
		found = 1;
		break;
	}
}
if (!found)
{
	_putchar(format[i]);
	length++;
}
}

va_end(args);
return (length);
}
