#include "main.h"
int print_num_left_shift(char *str, paramst *params)
{
	unsigned int n = 0, neg, neg2, i = _strlen(str);
	char pad_char = ' ';

	if (params->z_flag && !params->m_flag)
		pad_char = '0';
	neg = neg2 = (!params->unsignn && *str == '-');
	if (neg && i < params->width && pad_char == '0' && !params->m_flag)
		str++;
	else
		neg = 0;

	if (params->p_flag && !neg2 && !params->unsignn)
		n += _putchar('+'), i++;
	else if (params->s_flag && !neg2 && !params->unsignn)
		n += _putchar(' '), i++;
	n += _puts(str);
	while (i++ < params->width)
		n += _putchar(pad_char);
	return (n);
}
