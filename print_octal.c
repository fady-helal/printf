#include"main.h"

/**
 * print_octal - prints an octal number.
 * @args: arguments.
 * Return: count.
 */
int print_octal(va_list args)
{
int i, j;
int octal[32];
unsigned int decimal = va_arg(args, int);
int count = 0;
for (i = 0 ; decimal > 0 ; i++, count++)
{
octal[i] = decimal % 8;
decimal = decimal / 8;
}
for(j = i - 1 ; j >= 0 ; j--)
{
    _putchar(octal[j] + '0');
}
if (count == 0)
{
    count++;
    _putchar('0');
}
return(count);

}
