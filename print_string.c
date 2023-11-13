#include "main.h"
/**
 * print_string - print a string.
 * @args: argument.
 * Return: the length of the string.
 */

int print_string(va_list args)
{
char *str;
int len;
str = va_arg(args,char *);
for (len = 0 ; str[len] != '\0' ; len++)
_putchar(str[len]);
return(len);
}
