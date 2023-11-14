#include "main.h"
int print_hex(va_list ap, paramst *params)
{
	unsigned long l;
	int c = 0;
	char *str;

	if (params->b_modifier)
		l = (unsigned long)va_arg(ap, unsigned long);
	else if (params->a_modifier)
		l = (unsigned short int)va_arg(ap, unsigned int);
	else
		l = (unsigned int)va_arg(ap, unsigned int);

	str = convert(l, 16, CONVERT_UNSIGNED | CONVERT_LOWERCASE, params);
	if (params->h_flag && l)
	{
		*--str = 'x';
		*--str = '0';
	}
	params->unsignn = 1;
	return (c += print_number(str, params));
}
