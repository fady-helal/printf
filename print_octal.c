#include"main.h"
int print_octal(va_list ap, paramst *params)
{
	unsigned long l;
	char *str;
	int c = 0;

	if (params->b_modifier)
		l = (unsigned long)va_arg(ap, unsigned long);
	else if (params->a_modifier)
		l = (unsigned short int)va_arg(ap, unsigned int);
	else
		l = (unsigned int)va_arg(ap, unsigned int);
	str = convert(l, 8, CONVERT_UNSIGNED, params);

	if (params->h_flag && l)
		*--str = '0';
	params->unsignn = 1;
	return (c += print_number(str, params));
}
