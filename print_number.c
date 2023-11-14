#include "main.h"
int print_number(char *str, paramst *params)
{
	unsigned int i = _strlen(str);
	int neg = (!params->unsignn && *str == '-');

	if (!params->precision && *str == '0' && !str[1])
		str = "";
	if (neg)
	{
		str++;
		i--;
	}
	if (params->precision != UINT_MAX)
		while (i++ < params->precision)
			*--str = '0';
	if (neg)
		*--str = '-';

	if (!params->m_flag)
		return (print_num_right_shift(str, params));
	else
		return (print_num_left_shift(str, params));
}
