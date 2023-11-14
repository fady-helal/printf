#include "main.h"
int print_binary(va_list ap, paramst *params)
{
	unsigned int n = va_arg(ap, unsigned int);
	char *str = convert(n, 2, CONVERT_UNSIGNED, params);
	int c = 0;

	if (params->h_flag && n)
		*--str = '0';
	params->unsignn = 1;
	return (c += print_number(str, params));
}
