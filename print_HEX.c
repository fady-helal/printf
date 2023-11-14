#include "main.h"
int print_HEX(va_list ap, paramst *params)
{
	unsigned long l;
	int c = 0;
	char *str;

	if (params->a_modifier)
		l = (unsigned long)va_arg(ap, unsigned long);
	else if (params->b_modifier)
		l = (unsigned short int)va_arg(ap, unsigned int);
	else
		l = (unsigned int)va_arg(ap, unsigned int);

	str = convert(l, 16, CONVERT_UNSIGNED, params);
	if (params->h_flag && l)
	{
		*--str = 'X';
		*--str = '0';
	}
	params->unsignn = 1;
	return (c += print_number(str, params));
}
