#include "main.h"
int print_unsigned(va_list ap, paramst *params)
{
	unsigned long l;

	if (params->b_modifier)
		l = (unsigned long)va_arg(ap, unsigned long);
	else if (params->a_modifier)
		l = (unsigned short int)va_arg(ap, unsigned int);
	else
		l = (unsigned int)va_arg(ap, unsigned int);
	params->unsignn = 1;
	return (print_number(convert(l, 10, CONVERT_UNSIGNED, params), params));
}
