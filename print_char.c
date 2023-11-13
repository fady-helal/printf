#include "main.h"

/**
 * print_c - prints a character.
 * @args: arguments.
 * Return: integer.
 */
int print_char(va_list args)
{
char c;

	c = va_arg(args, int);
	_putchar(c);
		return (1);
}
