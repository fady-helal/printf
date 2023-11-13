#include "main.h"
/**
 * print_binary - prints binary number.
 * @args: parameter.
 * Return: integer
 */

int print_binary(va_list args)
{
int i, j;
unsigned int sum = 0;
unsigned int decimal = va_arg(args, unsigned int);

int binary[32];
i = 0;
while (decimal > 0)
{
binary[i] = decimal % 2;
decimal = decimal / 2;
i++;
sum++;
}
for (j = i - 1 ; j >= 0 ; j--)
{
	_putchar(binary[j] + '0');
}
if (sum == 0)
{
sum++;
_putchar('0');
}
return (sum);


}
